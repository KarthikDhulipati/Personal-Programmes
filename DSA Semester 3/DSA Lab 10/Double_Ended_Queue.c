#include<stdio.h>
#include<stdlib.h>
int front=0, rear=0;
void insert_rear(int *queue, int n){
    if ((rear+1)%n==front){
        printf("Overflow Condition.\n");
    }
    else{
        printf("Enter the data: ");
        scanf("%d", &queue[rear]);
        rear=(rear+1)%n;
    }
}
void delete_front(int *queue, int n){
    if ((front+1)%n==rear){
        printf("Underflow Condition.\n");
    }
    else{
        printf("The deleted element is %d.\n", queue[front]);
        front=(front+1)%n;
    }
}
void insert_front(int *queue, int n){
    if ((front==0 && rear==n-1) || (front==rear+1)){
        printf("Overflow Condition.\n");
        return;
    }
    else if (front==0){
        front=n-1;
    }
    else
    front--;
    printf("Enter the value: ");
    scanf("%d", &queue[front]);
}
void delete_rear(int *queue, int n){
    if (front==-1){
        printf("Underflow Condition.\n");
        return;
    }
    printf("The deleted element is %d.\n", queue[rear]);
    if (rear==0){
        rear=n-1;
    }
    else if (front==rear){
        front=rear=-1;
    }
    else
    rear--;
}

void input_restricted(int *queue, int n){
    int choice, i=0;
    printf("For Inserting a node from rear: 1;\nFor Deleting a node from front: 2;\nFor Deleting a node from rear: 3;\nExit: 4;");
    while (i<n){
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert_rear(queue, n);
            break;
            case 2:
            delete_front(queue, n);
            break;
            case 3:
            delete_rear(queue, n);
            break;
            case 4:
            break;
            default:
            printf("Invalid Input\n");
        }
        i++;
    }
}
void output_restricted(int *queue, int n){
    int choice, i=0;
    printf("For Inserting a node from rear: 1;\nFor Inserting a node from front: 2;\nFor Deleting a node from front: 3;\nExit: 4;");
    while(i<n){
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert_rear(queue, n);
            break;
            case 2:
            insert_front(queue, n);
            break;
            case 3:
            delete_front(queue, n);
            break;
            case 4:
            break;
            default:
            printf("Invalid Input\n");
        }
        i++;
    }   
}

int main(){
    system("cls");
    int n;
    printf("Enter the number of elements in the Queue: ");
    scanf("%d", &n);
    int queue[n];
    int choice;
    printf("For Input-Restricted Function: 1;\nFor Output-Restricted Function: 2;\nExit: 3;\nEnter your choice of the above options: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        input_restricted(queue, n);
        break;
        case 2:
        output_restricted(queue, n);
        break;
        case 3:
        printf("Thanks for trying out the program.\n");
        break;
        default:
        printf("Invalid Entry.\n");
        break;
    }
}