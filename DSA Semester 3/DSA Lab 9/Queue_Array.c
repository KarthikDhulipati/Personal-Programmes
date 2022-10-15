#include<stdio.h>
#include<stdlib.h>
#define n 5
int q[n];
int front=-1, rear=-1, max=0, min=0;
void peekmax(){
    if (rear==0){
            max=q[rear];
        }
    else{
        if (max<q[rear])
        max=q[rear];
    }
}
void peekmin(){
    if (rear==0){
            min=q[rear];
        }
        else{
            if (min>q[rear])
            min=q[rear];
        }
}
void insertion(){
    if (rear==n-1){
        printf("Overflow Condition\n");
        return;
    }
    else{
        front=0;
        printf("Enter the data: ");
        rear++;
        scanf("%d", &q[rear]);
        peekmax();
        peekmin();
    }
}
void delete(){
    if (front==-1){
        printf("Underflow Condition.\n");
        return;
    }
    else if (front==rear){
        printf("The deleted element is: %d\n", q[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("The deleted element is: %d\n", q[front]);
        front++;
    }
}
void display(){
    for (int i=front;i<=rear;i++){
        printf("%d ", q[i]);
    }
    printf("\n");
}
int main(){
    
    for (int i=0;i<n;i++){
        insertion();
    }
    display();
    printf("Maximum Value = %d\nMinimnum Value = %d\n", max, min);
    for (int i=0;i<n;i++)
    delete();
    return 0;
}