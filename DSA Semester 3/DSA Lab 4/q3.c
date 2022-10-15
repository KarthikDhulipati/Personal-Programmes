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
    int n, data, sum=0;
    struct node *temp, *head;
    head=0;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        head=create_Linked_List(head, data);
    }
    display(head);
    temp=head;
    while (temp!=0){
        printf("%d ", temp->data);
        sum+=temp->data;
        temp=temp->next;
        if (sum==temp->data){
            printf(";\n");
            sum=0;
            temp=temp->next;
        }
    }
    return 0;
}