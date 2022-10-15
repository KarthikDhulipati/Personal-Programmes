#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_Linked_List(struct node *head, int data){
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
void display(struct node *temp){
    while (temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    system("cls");
    struct node *head, *temp, *nextnode;
    int n, data;
    printf("Enter the number of nodes in the Linked List: ");
    scanf("%d", &n);
    head=0;
    for (int i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        head=create_Linked_List(head, data);
    }
    display(head);
    for (temp=head;temp->next!=0;temp=temp->next){
        repeat:
        if (temp->data==temp->next->data){
            nextnode=temp->next;
            temp->next=nextnode->next;
            free(nextnode);
            if (temp->data==temp->next->data){
                goto repeat;
            }
        }
        else{
            continue;
        }
    }
    display(head);
    return 0;
}