#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *head, *newnode, *nextnode, *temp;
void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next=0;
    if (top==NULL){
        top=newnode;
        temp=newnode;
    }
    else{
        top=newnode;
        top->next=temp;
        temp=newnode;
    }
}
void pop(){
    if (top==NULL){
        printf("The Stack is Empty.");
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}
void peek(){
    printf("The element at top is: %d\n", top->data);
}
int main(){
    system("cls");
    int n, op;
    repeat:
    printf("Press '1' for Push operation.\nPress '2' for Peek operation.\nPress '3' for Pop operation.\nEnter the operation number: ");
    scanf("%d", &op);
    switch (op){
        case 1:{
            printf("Enter the number of nodes in the stack: ");
            scanf("%d", &n);
            for (int i=0;i<n;i++){
                push();
            }
            break;
        }
        case 2:{
            peek();
            break;
        }
        case 3:{
            pop();
            peek();
            break;
        }
    }
    int check=0;
    printf("Press '1' for YES and '0' for NO:\nDo you want to repeat the program: ");
    scanf("%d", &check);
    if (check)
    goto repeat;
    else
    printf("Thanks for trying out the program.\n");
    return 0;
}