#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int exp;
    int flag;
    struct node *next;
};
struct node* create_Linked_List(struct node *head, int coeff, int exp){
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=coeff;
    newnode->exp=exp;
    newnode->flag=0;
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
struct node* manipulations(struct node *head){
    struct node *temp, *nextnode, *prevnode;
    temp=head;
    int flag=0;
    while (temp->next!=0){
        if (temp==head && temp->coeff==0){
            head=head->next;
            free(temp);
            temp=head;
            flag=1;
        }
        else if (temp->next->coeff==0 && temp->next->next!=0){
            nextnode=temp->next;
            temp->next=temp->next->next;
            free(nextnode);
            flag=1;
        }
        else if (temp->next->next==0 && temp->next->coeff==0){
            prevnode=temp;
            nextnode=prevnode->next;
            prevnode->next=0;
            free(nextnode);
        }
        temp=temp->next;
    }
    return (head);
}
struct node* polynomial_input(struct node *head, int n){
    int coeff, exp;
    for (int i=0;i<n;i++){
        printf("Enter the coefficient and exponent respectively: ");
        scanf("%d %d", &coeff, &exp);
        head=create_Linked_List(head, coeff, exp);
    }
    return head;
}
void display(struct node *temp){
    while (temp!=0){
        if (temp->next!=0)
            printf("%d(x^%d) + ", temp->coeff, temp->exp);
        else{
            printf("%d(x^%d)", temp->coeff, temp->exp);
        }
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    system("cls");
    struct node *head1, *head2, *head3, *temp1, *temp2;
    head1=head2=head3=0;
    int n1, n2, z=0;
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n2);

    head1=polynomial_input(head1, n1);
    head1=manipulations(head1);
    display(head1);

    head2=polynomial_input(head2, n2);
    head2=manipulations(head2);
    display(head2);
    
    //Adding the two polynomials:
    //Add for the condition of equal polynomials.
    for (temp1=head1;temp1!=0;temp1=temp1->next){
        for (temp2=head2;temp2!=0;temp2=temp2->next){
            if (temp1->exp==temp2->exp){
                head3=create_Linked_List(head3, temp1->coeff+temp2->coeff,temp1->exp);
                temp1->flag=1;
                temp2->flag=1;
                z=1;
            }
        }
        if (z==0){
            head3=create_Linked_List(head3, temp1->coeff, temp1->exp);
        }
    }
    for (temp2=head2;temp2!=0;temp2=temp2->next){
        if (temp2->flag==0){
            head3=create_Linked_List(head3, temp2->coeff, temp2->exp);
        }
    }
    printf("Addition of Polynomial 1 and Polynomial 2 gives us: \n");
    display(head3);
    return 0;
}