#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
    int x;
};
int value(char q){
    if (q=='O')
    return 1;
    else if (q=='E')
    return 2;
    else if (q=='A')
    return 3;
    else if (q=='B')
    return 4;
    else if (q=='C')
    return 5;
}
struct node* create_list(struct node* head, char data){
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->x=value(newnode->data);
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
void display(struct node* temp){
    while (temp!=0){
        printf("%c ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    system("cls");
    int n;  
    int ch;
    struct node *head, *temp;
    head=0;
    printf("Enter the number of nodes in the linked list: ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("Enter the Character: ");
        scanf(" %c", &ch);
        head=create_list(head, ch);;
    }
    for (int i=0;i<n;i++){
        temp=head;
        for (int j=0;j<n-i && temp->next!=0;j++){
            if (temp->x > temp->next->x){
                int t=temp->x;
                temp->x=temp->next->x;
                temp->next->x=t;
                char c=temp->data;
                temp->data=temp->next->data;
                temp->next->data=c;
            }
            temp=temp->next;
        }
    }
    printf("\nThe Order of the Marks is as Follows: ");
    display(head);
    printf("\n");
    return 0;
}