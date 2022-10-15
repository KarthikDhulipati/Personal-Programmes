#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int *stack, int n){
    if (top==n)
    printf("Overload condition.\n");
    else{
        top++;
        printf("Enter the data: ");
        scanf("%d", &stack[top]);
    }
}
void pop(){
    if (top==-1)
    printf("Underflow Condition.\n");
    else{
        top--;
    }
}
void peek(int *stack, int n){
    if (top==-1)
    printf("The Stack is empty.\n");
    else
    printf("The 'top' is at the element: %d\n", stack[top]);
}
void display(int *stack, int n){
    for (int i=top;i>=0;i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}
void duplicate_remover(int *stack, int n){
    int check=0;
    for (int i=top;i>=0;i--){
        for (int j=top;j>=0;j--){
            if (stack[i]==stack[j] && i!=j){
                check=1;
                break;
            }
            else
            continue;
        }
        if (check==1){
            n--;
            pop();
            check=0;
        }
    }
}
int main(){
    system("cls");
    int n;
    printf("Enter the number of elements to be pushed in the stack: ");
    scanf("%d", &n);
    int stack[n];
    for (int i=0;i<n;i++){
        push(stack, i);
    }
    for (int i=top;i>=0;i--){ //This loop is to check if there are still any duplicate elements left or not. If left, then the duplicate remover is called.
        if (stack[i]==stack[i-1])
        duplicate_remover(stack, n);
    }
    duplicate_remover(stack, n);
    display(stack, n);
    return 0;
}