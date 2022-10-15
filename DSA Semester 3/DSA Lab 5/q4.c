#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_Linked_List1(struct node *head, int data){
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
void display(struct node *head){
    struct node *temp;
    temp=head;
    while (temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    system("cls");
    struct node *head3, *head1, *head2, *head, *temp;
    head1=head2=head=0;
    int n, data;
    printf("Enter the number of nodes in the Linked List: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
            printf("Enter the data: ");
            scanf("%d", &data);
            head=create_Linked_List1(head, data);
    }
    printf("The Original Linked List is: ");
    display(head);
    int count=0;
    temp=head;
    for (int i=1;i<=n;i++,temp=temp->next){
        if ((i%2)==0){
            head1=create_Linked_List1(head1, temp->data);
        }
    }
    temp=head;
    for (int i=1;i<=n;i++,temp=temp->next){
        if ((i%2)==1){
           head2=create_Linked_List1(head2, temp->data);
        }
    }
    printf("First Sub Linked List: ");
    display(head1);
    printf("Second Sub Linked List: ");
    display(head2);
    temp=head2;
    while (temp->next!=0){
        temp=temp->next;
    }
    temp->next=head1;
    display(head2);
    return 0;
}