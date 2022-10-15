#include<stdio.h>
#include<stdlib.h>
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
            //If this block is implemented, it is meant that the new_node being formed is the head of the Linked List.
            head=new_node;//This allocation of the value to head is never changed in the program since this would lead to the other nodes being lost forever.
            temp=new_node;
        }
        else{
            temp->next=new_node;//We maintain this order of code since the temp is pointing towards the previous new_node and we are therefore using temp pointer to link the previous new_node to the new new_node.
            temp=new_node;
        }
    }
    return (head);
}
void display(struct node *head){
    struct node *temp;
    //Every time we have to traverse a Linked List, we have to set the temp equal to head as head acts as the starting point for the traversion.
    for (temp=head;temp!=0;temp=temp->next){
        printf("%d ", temp->data);
    }
    printf("\n");
}
int main()
{
    system("cls");
    int n, create, check;
    struct node *head, *new_node, *temp;
    repeat:
    printf("Press '1' for Creating a Linked List;\nPress '2' to Display the Linked List;\nEnter the number: ");
    scanf("%d", &create);
    switch (create){
        case 1:
        {
            printf("Enter the number of nodes in the Linked List: ");
            scanf("%d", &n);
            head=create_List(n);//We are sending the value of 'n' and are getting the struct node pointer 'head' in return which is most required for printing the array.
            break;
        }
        case 2:{
            display(head);
            break;
        }
    }
    printf("Enter '1' to repeat the program or '0' to exit: ");
    scanf("%d", &check);
    if (check)
    goto repeat;
    else
    printf("The program is Terminated.\n");
    return 0;
}