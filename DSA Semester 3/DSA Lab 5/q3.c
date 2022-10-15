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
void display(struct node *head){
    struct node *temp;
    temp=head;
    while (temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head, *nextnode, *temp;
    int data, n;
    printf("Enter the number of nodes in the Linked List: ");
    scanf("%d", &n);
    head=0;
    for (int i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        head=create_Linked_List(head, data);
    }
    display(head);
    //To swap consecutive numbers in the Linked List.
    temp=head;
    while (temp!=0 && temp->next!=0){
        nextnode=temp->next;
        int t;
        t=nextnode->data;
        nextnode->data=temp->data;
        temp->data=t;
        temp=nextnode->next;
    }
    display(head);
    return 0;
}