#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node* create_List(struct node *rear, int data){
    struct node *nextnode, *temp;
    nextnode=(struct node*)malloc(sizeof(struct node));
    nextnode->next=0;
    nextnode->data=data;
    if (front==0){
        front=nextnode;
        rear=nextnode;
    }
    else{
        rear->next=nextnode;
        rear=nextnode;
    }
    return rear;
}
void delete(struct node *rear){
    if (front==rear){
        free(front);
        front=rear=0;
        printf("Underflow Condition\n");
    }
    else{
        struct node *temp;
        temp=front;
        front=front->next;
        free(temp);
    }
}
void display(struct node *rear){
    struct node *temp;
    temp=front;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct node *rear, *temp;
    int n, data;
    rear=0;
    printf("Enter the number of elements in the Linked List: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        rear=create_List(rear, data);
    }
    display(front);
    for (int i=0;i<n;i++)
    delete(rear);
    display(front);
    return 0;
}