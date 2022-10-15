#include<stdio.h>
#include<stdlib.h>
#define N 5
int top=-1;
int stack[N];
void push(){
    int x;
    printf("Enter the data: ");
    scanf("%d", &x);
    if (top==N-1){
        printf("Overload Condition.\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if (top==-1){
        printf("Underflow Condition.\n");
    }
    else{
        item=stack[top];
        top--;
        printf("%d ", item);
    }
}
void peek(){
    if (top==-1){
        printf("The stack is Empty\n");
    }
    else{
        printf("%d ", stack[top]);
    }
}
int main(){
    system("cls");
    for (int i=0;i<N;i++){
        push();
    }
    for (int i=top;i>-1;i--){
        pop();
    }
    return 0;
}