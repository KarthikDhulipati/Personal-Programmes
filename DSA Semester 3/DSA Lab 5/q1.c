#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_Linked_List(struct node* head, int data){
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    if (head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}
void display(struct node *head){
    struct node *temp;
    temp=head;
    while (temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node* insert_Node(struct node *head, int data){
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}
void search_Linked_List(struct node *head, int search){
    struct node *temp;
    int count=1, nos=1;
    temp=head;
    while (search!=temp->data){
        temp=temp->next;
        count++;

    }
    printf("%d element exists in the Linked List at %d position.\n", search, count);
}
struct node* delete_Node(struct node *head){
    struct node *temp, *nextnode;
    int pos;
    printf("Enter the postion of the node to delete it: ");
    scanf("%d", &pos);
    temp=head;
    if (pos==1){
        head=temp->next;
        free (temp);
        return head;
    }
    else{
        for (int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free (nextnode);
        return head;
    }
}
int main()
{
    system("cls");
    struct node *head;
    int n, data, no, pos, search;
    head=0;
    printf("Enter the number of nodes in the Linked List: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        head=create_Linked_List(head, data);
    }
    printf("\nThea Linked List is as follows: \n");
    display(head);
    repeat:
    printf("Enter the Question Number: ");
    scanf("%d", &no);
    from2:
    switch (no){
        case 1:
        {
            printf("For Inserting a node in the beginning: \n");
            printf("Enter the data: ");
            scanf("%d", &data);
            head=insert_Node(head, data);
            display(head);
            break;
        }
        case 2:
        {
            printf("For Inserting a node at the specified postion:\n");
            printf("Enter the position of insertion of the node: ");
            scanf("%d", &pos);
            if (pos==1){
                no=1;
                goto from2;
            }
            else{
                printf("Enter the data: ");
                scanf("%d", &data);
                struct node *temp, *newnode, *nextnode;
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=data;
                newnode->next=0;
                int i=1;
                temp=head;
                while (i<pos-1){
                    temp=temp->next;
                }
                newnode->next=temp->next;
                temp->next=newnode;
                display(head);
                break;
            }
        }
        case 3:
        {
            struct node *temp, *nextnode;
            printf("Deletion of Node:\n");
            head=delete_Node(head);
            display(head);
            break;
        }
        case 4:
        {
            printf("Searching in a Linked List: \n");
            printf("Enter the number to be searched: ");
            scanf("%d", &search);
            search_Linked_List(head, search);
            break;
        }
    }
    int z;
    printf("\nDo you want to repeat the program?\nEnter '1' for YES and '0' for NO: ");
    scanf("%d", &z);
    if (z==1){
        goto repeat;
    }
    else
    printf("Thanks for trying out the program.\n");
    return 0;
}