#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_List(int n){
    struct node *head, *new_node, *temp;
    head=0;
    for (int i=0;i<n;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &new_node->data);
        new_node->next=0;
        if (head==0){
            head=new_node;
            temp=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
        }
    }
    return (head);
}
int converter(struct node *head, int n){
    //The converter converts the different elements in the linked list and forms a number in the reversed order of the linked list as asked in the question.
    struct node *temp;
    int val=1, num=0;
    temp=head;
    while (temp!=0){
        num+=(temp->data)*val;
        val=val*10;
        temp=temp->next;
    }
    return num;
}
int main()
{
    system("cls");
    int n1, n2, num1, num2, ans, t;
    struct node *head1, *temp, *newnode, *head2, *head3;
    printf("Enter the number of nodes in the First Linked List: ");
    scanf("%d", &n1);
    head1=create_List(n1);
    printf("Enter the number of nodes in the Second Linked List: ");
    scanf("%d", &n2);
    head2=create_List(n2);
    num1=converter(head1, n1);
    num2=converter(head2, n2);
    ans=num1-num2;
    head3=0;
    int x=ans, count=0;
    //The number of elements in the answer is checked with the help of the while loop so that the number of elements in the last term can be specified.
    while(x!=0){
        count++;
        x=x/10;
    }
    for (int i=0;i<count;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        t=ans%10;
        newnode->data=t;
        newnode->next=0;
        ans=ans/10;
        if (head3==0){
            head3=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head3;
    while(temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    return 0;
}