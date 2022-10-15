#include<stdio.h>
#include<stdlib.h>
#define N 5
int top=-1, top2=-1;
int stack[N], stack2[N];
int push(int top, int *stack){
    if (top==N-1)
    printf("Overload Condition\n");
    else{
        top++;
        printf("Enter the Value: ");
        scanf("%d", &stack[top]);
    }
    return top;
}

void peek(int top2, int *stack2){
    int item;
    item=stack2[top2];
    if (top2==-1)
    printf("This stack is empty\n");
    else{
        for (int i=top2;i>-1;i--)
        printf("%d ", stack2[i]);
    }
    printf("\n");
}
int  pop(int top, int *stack){
    if (top==-1)
    printf("Underflow Condition\n");
    else
    top--;
    return top;
}
int reverse(int top, int *stack){
    int temp;
    for (int i=0;i<=(N-1)/2;i++){
        temp=stack[i];
        stack[i]=stack[N-1-i];
        stack[N-1-i]=temp;
    }
    return top;
}
int copy(int top2, int top, int *stack, int *stack2){
    for (int i=top;i>-1;i--){
        top2++;
        stack2[top2]=stack[i];
    }
    return top2;
}
int main(){
    system("cls");
    for (int i=0;i<N;i++){
        top=push(top, stack);
    }
    printf("Before Reversing the Stack: \n");
    peek(top, stack);
    printf("After Reversing the Stack: \n");
    top=reverse(top, stack);
    peek(top, stack);
    printf("After copying the stack elements into a new stack: \n");
    top2=copy(top2, top, stack, stack2);
    peek(top2, stack2);
    return 0;
}