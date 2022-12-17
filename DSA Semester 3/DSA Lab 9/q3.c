#include<stdio.h>
#include<stdlib.h>
int front=-1, rear=-1, top=-1;
void push_stack(int *stack, int data, int n){
    if (top==n){
        printf("Overload Condition from stack.\n");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop_stack(){
    if (top==-1)
    printf("Underflow Condition from stack.\n");
    else{
        top--;
    }
}
void peek_stack(int *stack){
    if (top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("The element at the top is: %d\n", stack[top]);
    }
}
int find_max(int *queue, int n){
    int max=queue[0];
    for (int i=front;i<=rear;i++){
        if (max<queue[i])
        max=queue[i];
    }
    return max;
}
void delete_element(int *queue, int n, int max){
    for (int i=front;i<=rear;i++){
        if (queue[i]==max){
            queue[i]=0;
            break;
        }
    }
}
void insert_queue(int *queue, int data, int n){
    if (rear==n-1){
        printf("Overload Condition from queue.\n");
        return;
    }
    else{
        front=0;
        rear++;
        queue[rear]=data;
    }
}
void display(int *queue){
    for (int i=front;i<=rear;i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int front2=-1, rear2=-1;
void queue_insert(int* stack, int* q, int n){
    for (int i=0;i<n;i++){
        if (rear2==n){
            printf("Overload Condition from queue.\n");
            return;
        }
        else{
            front2=0;
            rear2++;
            q[i]=stack[top];
            pop_stack();
        }
    }
}
int main(){
    system("cls");
    int n;
    printf("Enter the number of elements in the Queue 1: ");
    scanf("%d", &n);
    int queue[n], data;
    for (int i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d", &data);
        insert_queue(queue, data, n);
    }
    printf("The Initial Queue is as follows: \n");
    display(queue);
    int t=n;
    int stack[t], max;
    for (int i=n;i>=1;i--){
        max=find_max(queue, n);
        push_stack(stack, max, n);
        delete_element(queue, n, max);
    }
    int q[t];
    queue_insert(stack, q, t);
    printf("The New Sorted Queue is as follows: ");
    for (int i=front2;i<=rear2;i++){
        printf("%d ", q[i]);
    }
    printf("\n");
    return 0;
}