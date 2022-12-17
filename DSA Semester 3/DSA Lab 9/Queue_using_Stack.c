#include<stdio.h>
#include<stdlib.h>
int top=-1;
void stack_push(int* stack, int a, int n){
    if (top==n-1)
    printf("Overload Condition.\n");
    else{
        top++;
        stack[top]=a;
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
int front=-1, rear=-1;
void queue_insert(int* stack, int* queue, int n){
    for (int i=0;i<n;i++){
        if (front==-1){
            front=0;
            rear++;
            queue[i]=stack[top];
            stack_pop();
        }
        else{
            rear++;
            queue[i]=stack[top];
            stack_pop();
        }
    }
}
void queue_display(int* queue){
    for (int i=front;i<=rear;i++){
        printf("%d ", queue[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the Stack: ");
    scanf("%d", &n);
    int stack[n];
    for (int i=0;i<n;i++){
        int a;
        printf("Enter the element: ");
        scanf("%d", &a);
        stack_push(stack, a, n);
    }
    printf("The elements stored in the stack are: \n");
    stack_display(stack);
    //NOW, CONVERTING THE STACK TO A QUEUE.
    int queue[n];
    queue_insert(stack, queue, n);
    printf("\n\nNow, The queue generated from the stack is: \n");
    queue_display(queue);
    return 0;
}