#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next, *prev;
};
struct node *head, *newnode, *nextnode, *temp, *last;
void create_Doubly_Linked_List(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->prev=0;
    if (head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void insert_at_beginning(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->prev=0;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void delete(int pos){
        int i=1;
        temp=head;
        while (i<pos-1){
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        nextnode->next->prev=temp;
        free(nextnode);
}
void display(){
    printf("\nInitial order of Linked List: ");
    temp=head;
    while (temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\nReverse traversal of Linked List: ");
    temp=head;//Lines 58 to 61 are giving us the last term of the Doubly Linked List.//
    while (temp->next!=0){
        temp=temp->next;
    }
    while(temp!=0){
        printf("%d ", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
int main()
{
    system("cls");
    int n, data, no, check=0;
    head=0;
    repeat:
    printf("Enter the question number: ");
    scanf("%d", &no);
    switch(no){
        case 1:{
            printf("Enter the number of nodes in the doubly linked list: ");
            scanf("%d", &n);
            for (int i=0;i<n;i++){
                printf("Enter the data: ");
                scanf("%d", &data);
                create_Doubly_Linked_List(data);
            }
            break;
        }
        case 2:{
            display();
            break;
        }
        case 3:{
            printf("Inserting a node at the beginning: \n");
            insert_at_beginning();
            display();
            break;
        }
        case 4:{
            int pos, i=1;
            printf("Inserting a node at specified Position: \n");
            printf("Enter the position of insertion of the node: ");
            scanf("%d", &pos);
            temp=head;
            while (i<pos-1){
                temp=temp->next;
                i++;
            }
            nextnode=temp->next;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            newnode->prev=temp;
            temp->next=newnode;
            newnode->next=nextnode;
            nextnode->prev=newnode;
            display();
            break;
        }
        case 5:{
            int pos;
            printf("Deletion of a Node: \n");
            printf("Enter the position of the element to be deleted: ");
            scanf("%d", &pos);
            delete(pos);
            display();
            break;
        }
        default:{
            printf("Invalid Entry.\n");
            break;
        }
    }
    printf("Enter '1' for YES and '0' for NO.\nDo you want to repeat the Program: ");
    scanf("%d", &check);
    if (check==1){
        goto repeat;
    }
    else{
        printf("Thanks for trying out the Program.\n");
    }
    return 0;
}