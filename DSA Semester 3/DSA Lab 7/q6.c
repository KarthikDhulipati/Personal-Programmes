#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int push(int* stack, int top, int n, int data){
    if (top==n)
    printf("Overload Condition.\n");
    else{
        top++;
        stack[top]=data;
    }
    return top;
}
int pop(int *stack, int top){
    if (top==-1)
    printf("Underflow Condition.\n");
    else{
        top--;
    }
}
void peek(int *stack, int top){
    if (top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("%d", stack[top]);
    }
}
void display(int *stack, int top, int n){
    for (int i=top;i>=0;i--){
        printf("%d", stack[i]);
    }
    printf("\n");
}
int main(){
    int decimal, count=0, binary=0;
    printf("Enter the decimal number to be converted to binary: ");
    scanf("%d", &decimal);
    int n=0;
    while (decimal!=0){
        for (n=0;decimal/(pow(2,n))>=1;n++);
        n--;
        decimal=decimal-pow(2,n);
        binary+=pow(10,n);
        n=0;
    }
    int t=binary;
    while (t!=0){
        t=t/10;
        count++;
    }
    int stack[count], top=-1;
    while (binary!=0){
        t=binary%10;
        top=push(stack, top, count, t);
        binary=binary/10;
    }
    display(stack, top, count);
    return 0;
}