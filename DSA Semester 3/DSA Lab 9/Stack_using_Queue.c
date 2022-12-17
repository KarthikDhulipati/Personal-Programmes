#include<stdio.h>
#include<stdlib.h>
int top=-1;
int front=-1, rear=-1;
void stack_push(int* stack, int* queue, int n){
    if (top==n-1)
    printf("Overload Condition.\n");
    else{
        for (int i=front;i<=rear;i++){
            top++;
            stack[top]=queue[i];
        }
    }
}
void stack_pop(){
    if (top==-1)
    printf("Underflow Condition.\n");
    else{
        top--;
    }
}
void stack_peek(int *stack, int n){
    if (top==-1)
    printf("The Stack is Empty.\n");
    else{
        printf("%d ", stack[top]);
    }
}
void stack_display(int* stack){
    for (int i=top;i>=0;i--){
        printf("%d ", stack[i]);
    }
}
void queue_insert(int* queue, int n){
    for (int i=0;i<n;i++){
        if (rear==n-1){
            printf("Overflow Condition.\n");
            return;
        }
        else{
            front=0;
            printf("Enter the data: ");
            rear++;
            scanf("%d", &queue[rear]);
        }
    }
}
void queue_deletion(int *queue){
    if (front==-1)
    printf("Underflow Condition.\n");
    else if (front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
void queue_display(int* queue){
    for (int i=front;i<=rear;i++){
        printf("%d ", queue[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the queue: ");
    scanf("%d", &n);
    int queue[n], stack[n];
    queue_insert(queue, n);
    printf("The queue entered is as follows: \n");
    queue_display(queue);
    printf("\nThe Stack formed from the Queue is: \n");
    stack_push(stack, queue, n);
    stack_display(stack);
    return 0;
}