#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coefficient;
    int exponent;
    struct node *link;
};

// Function to create new linked list for a polynomial
void create_linkedlist(struct node **head)
{
    int coeff, expo, degree, count = 0;
    printf("\nWhat is the degree of polynomial ");
    scanf("%d", &degree);
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    *head = temp;
    while (count != degree + 1)
    {
        printf("Enter the  Coeffecient and the Exponent respectively: ");
        scanf("%d %d", &coeff, &expo);
        temp->coefficient = coeff;
        temp->exponent = expo;
        temp->link = NULL;
        if (count != degree)
        {
            temp->link = (struct node *)malloc(sizeof(struct node));
            temp = temp->link;
            temp->link = NULL;
        }
        count++;
    }
}
void display(struct node *ptr)
{
    printf("\nPolynomial expression is: \n");
    while (ptr != NULL)
    {
        printf(" %d(x^%d) ", ptr->coefficient, ptr->exponent);
        ptr = ptr->link;
        if (ptr != NULL)
            printf("+");
    }
}
// Multiply two polynomials
void polymult(struct node *list1, struct node *list2,
              struct node **result)
{
    struct node *ptr2 = list2;
    struct node *temp = *result;
    while (ptr2 != NULL)
    {
        for (struct node *ptr1 = list1; ptr1 != NULL; ptr1 = ptr1->link)
        {
            if ((*result)->coefficient != (list1->coefficient) * (list2->coefficient))
            {

                (*result)->coefficient = (list1->coefficient) * (list2->coefficient);
                (*result)->exponent = (list1->exponent) + (list2->exponent);
                (*result)->link = NULL;
            }
            else if (((ptr1->exponent) + (ptr2->exponent)) < (temp->exponent))
            {
                temp->link = (struct node *)malloc(sizeof(struct node));
                temp = temp->link;
                temp->coefficient = (ptr1->coefficient) * (ptr2->coefficient);
                temp->exponent = (ptr1->exponent) + (ptr2->exponent);
                temp->link = NULL;
            }
            else
            {
                for (temp=*result;(temp->exponent)!=((ptr1->exponent)+(ptr2->exponent));temp=temp->link)
                    ;
                temp->coefficient+=((ptr1->coefficient)*(ptr2->coefficient));
                for (;temp->link!=NULL;temp=temp->link)
                    ;
            }
        }
        ptr2 = ptr2->link;
    }
}
int main()
{
    system("cls");
    struct node *Linkedlist1=NULL, *Linkedlist2=NULL;
    printf("\n1st Polynomial: ");
    create_linkedlist(&Linkedlist1);
    display(Linkedlist1);
    printf("\n2nd Polynomial: ");
    create_linkedlist(&Linkedlist2);
    display(Linkedlist2);
    struct node *Mult_list=(struct node *)malloc(sizeof(struct node));
    // Multiply two polynomials
    polymult(Linkedlist1, Linkedlist2, &Mult_list);
    // Display resultant List
    printf("\nMultipling the two polynomials ");
    display(Mult_list);
    return 0;
}
