#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_List(int n){
    struct node *head, *new_node, *temp;
    head=0;
    for (int i=0;i<n;i++){
        if (head==0){
            new_node=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &new_node->data);
            new_node->next=0;
            head=new_node;
            temp=new_node;
        }
        else{
            new_node=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &new_node->data);
            new_node->next=0;
            temp->next=new_node;
            temp=new_node;
        }
    }
    return (head);
}
void display(struct node *head){
    struct node *temp;
    for (temp=head;temp!=0;temp=temp->next){
        printf("%d ", temp->data);
    }
    printf("\n");
}
int main()
{
    int n, create;
    struct node *head, *new_node, *temp;
    repeat:
    printf("Enter the number of nodes in the Linked List: ");
    scanf("%d", &n);
    head=create_List(n);
    display(head);
    printf("\nPress '1' for Inserting a new node in the Linked List;\nPress '2' to delete a node in a Linked List;\nEnter the number: ");
    scanf("%d", &create);
    switch (create){
        case 1:
        {
            struct node *next_node;
            int i=1, pos;
            printf("Enter the Position of the Insertion of the Node in the Linked List: \n");
            scanf("%d", &pos);
            temp=head;
            while (i<pos-1){
                temp=temp->next;
                i++;
            }
            new_node=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &new_node->data);
            new_node->next=temp->next;
            temp->next=new_node;
            temp=head;
            display(temp);
            break;
        }
        case 2:
        {
            struct node *prevnode;
            int del;
            printf("Enter the number to be deleted from the Linked List: ");
            scanf("%d", &del);
            temp=head;
            while (temp->data!=del){
                prevnode=temp;
                temp=temp->next;
            }
            prevnode->next=temp->next;
            free(temp);
            temp=head;
            display(temp);
        }
    }
    printf("Press '1' to repeat the program and '0' to Exit the program: ");
    int repeat;
    scanf("%d", &repeat);
    if (repeat==1)
    goto repeat;
    else
    printf("The program is terminated.\n");
    return 0;
}