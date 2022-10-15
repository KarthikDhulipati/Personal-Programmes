#include<stdio.h>
#include<stdlib.h>
int push(int *stack, int n, int top, int data){
    if (top==n)
    printf("Overload condition.\n");
    else{
        top++;
        stack[top]=data;
    }
    return top;
}
int pop(int top){
    if (top==-1)
    printf("Underflow Condition.\n");
    else{
        top--;
    }
    return top;
}
void peek(int *stack, int top){
    if (top==-1)
    printf("The Stack is empty.\n");
    else
    printf("The 'top1' is at the element: %d\n", stack[top]);
}
void display(int *stack, int top){
    if (top==-1)
    printf("The stack is empty.\n");
    else{
        for (int i=top;i>=0;i--){
            printf("%d ", stack[i]);
        }
    }
    printf("\n");
    
}
int main(){
    system("cls");
    int top1=-1, top2=-1;
    int n1, n2, data;
    printf("Enter the number of elements to be pushed by the stack: ");
    scanf("%d", &n1);
    printf("Enter the number of elements to be pushed by the stack: ");
    scanf("%d", &n2);
    int stack1[n1], stack2[n2];
    for (int i=0;i<n1;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        top1=push(stack1, n1, top1, data);
    }
    for (int i=0;i<n2;i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        top2=push(stack2, n2, top2, data);
    }
    printf("Stack 1 elements are: ");
    display(stack1, top1);
    printf("Stack 2 elements are: ");
    display(stack2,top2);
    int t=top2;
    //Merging the two stacks now.
    n1+=n2;
    while (top1<n1-1){
        //In this while loop, I have used 'top1<n1-1' instead of 'top1<n1' because after adding the elements initially to the stack 1, top1 is at n1-1 position, i.e., if n1=5 elements, then top is at 4. Therefore, when we merge the elements of stack 1 and stack 2 where stack 2 has n2=5 elements, the number of elements in the stack is 10 but the top will point at 4(previous position)+5 elements=9.
        top1=push(stack1, n1, top1, stack2[top2]);
        top2--;
    }
    printf("\nStack 1 elements after merging with Stack2 elements are: \n");
    display(stack1, top1);
    return 0;
}