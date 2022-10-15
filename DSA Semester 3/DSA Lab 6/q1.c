#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_Linked_List(struct node *head, int data){
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    if (head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}
struct node* Circular_Linked_List(struct node *head){
    struct node *temp;
    temp=head;
    while (temp->next!=0){
        temp=temp->next;
    }
    temp->next=head;
}
void display(struct node *head){
    struct node *temp;
    temp=head;
    do{
        printf("%d ", temp->data);
        temp=temp->next;
    } while(temp!=head);
    printf("\n");
}
struct node* delete_Circular_Linked_List(struct node *head, int pos){
    struct node *temp, *nextnode, *temp2;
    int j=1;
    temp=head;
    if (pos==1){
        temp2=head;
        do{
            temp2=temp2->next;
        } while(temp2->next!=head);
        head=head->next;
        free(temp);
        temp2->next=head;
    }
    else{
        do{
            temp=temp->next;
            j++;
        } while(j<pos-1 && temp!=head);
        printf("temp->data = %d\n", temp->data);
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
    return head;
}
int main(){
    system("cls");
    struct node *head, *temp, *newnode;
    int data, n, no;
    head=0;
    repeat:
    printf("Enter the question part number: ");
    scanf("%d", &no);
    switch(no){
        case 1:{
            printf("Creating a Circular Linked List: \n");
            printf("Enter the number of nodes in the Circular LInked List: ");
            scanf("%d", &n);
            for (int i=0;i<n;i++){
                printf("Enter the data: ");
                scanf("%d", &data);
                head=create_Linked_List(head, data);
            }
            Circular_Linked_List(head);
            break;
        }
        case 2:{
            printf("Displaying the Linked List: ");
            display(head);
            break;
        }
        case 3:{
            printf("Insertion of node using a given position: \n");
            temp=head;
            do
            {
                temp=temp->next;
            } while (temp->next!=head);
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            newnode->next=head;
            head=newnode;
            temp->next=head;
            display(head);
            break;
        }
        case 4:{
            int i=1, pos;
            printf("Enter the position of insertion of the node: ");
            scanf("%d", &pos);
            temp=head;
            do {
                temp=temp->next;
                i++;
            } while(i<pos-1 && temp->next!=head);
            printf("temp->data = %d\n", temp->data);
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;
            display(head);
            break;
        }
        case 5:{
            int pos;
            printf("Delete from all types of positions.\n");
            printf("Enter the position: ");
            scanf("%d", &pos);
            head=delete_Circular_Linked_List(head, pos);
            display(head);
        }
    }
    int check;
    printf("Do you want to repeat the program?\nEnter '1' for YES and '0' for NO: ");
    scanf("%d", &check);
    if (check==1){
        goto repeat;
    }
    else{
        printf("Thanks for trying out the program.\n");
    }
    return 0;
}