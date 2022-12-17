#include<stdio.h>
#include<stdlib.h>
int front=0, rear=0;
void enqueue(int *queue, int n){
    if ((rear+1)%n==front){
        printf("Overflow Condition.\n");
    }
    else{
        rear=(rear+1)%n;
        printf("Enter the data: ");
        scanf("%d", &queue[rear]);
    }
}
void dequeue(int* queue, int n){
    if ((front+1)%n==rear){
        printf("%d ", queue[(front+1)%n]);
        printf("Underflow Condition.\n");
    }
    else{
        front=(front+1)%n;
        printf("%d ", queue[front]);
    }
}
int main(){
    system("cls");
    int n;
    printf("Enter the number of elements in the Queue: ");
    scanf("%d", &n);
    int queue[n];
    for (int i=0;i<n-1;i++){
        enqueue(queue, n);
    }
    for (int i=0;i<n-1;i++){
        dequeue(queue, n);
    }
}