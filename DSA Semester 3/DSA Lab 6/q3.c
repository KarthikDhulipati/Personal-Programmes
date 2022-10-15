#include<stdio.h>
#include<stdlib.h>
void polynomial_add(int *p, int *q, int size_p, int size_q){
    int t;
    if (size_p>size_q)
    t=size_p;
    else
    t=size_q;
    int s[t];
    for (int i=0;i<t;i++){
        if (t==size_q)
        s[i]=q[i];
        else
        s[i]=p[i];
    }
    if (t==size_p){
        for (int i=0;i<size_q;i++){
            s[i]+=q[i];
        }
    }
    else if (t==size_q){
        for (int i=0;i<size_p;i++){
            s[i]+=p[i];
        }
    }
    for (int i=0;i<t;i++){
        if (i==t-1)
        printf("%d(x^%d) ", s[i], i);
        else
        printf("%d(x^%d) + ", s[i], i);
    }
}
void polynomial_multiplication(int *p, int *q, int p_size, int q_size){
    int t;
    t=p_size+q_size-1;
    long int m[t];
    for (int i=0;i<t;i++)
    m[i]=0;
    for (int i=0;i<p_size;i++){
        for (int j=0;j<q_size;j++){
            m[i+j]+=(p[i]*q[j]);
        }
    }
    for (int i=0;i<t;i++){
        if (i==t-1)
        printf("%ld(x^%d) ", m[i], i);
        else
        printf("%ld(x^%d) + ", m[i], i);
    }
}
int main()
{
    system("cls");
    int size_p, size_q;
    printf("Enter the size of polynomial 1: ");
    scanf("%d", &size_p);
    printf("Enter the size of polynomial 2: ");
    scanf("%d", &size_q);
    int p[size_p], q[size_q];
    printf("Enter the coefficients of polynomial 1: ");
    for (int i=0;i<size_p;i++){
        scanf("%d", &p[i]);
    }
    printf("Enter the coefficients of polynomial 2: ");
    for (int i=0;i<size_q;i++){
        scanf("%d", &q[i]);
    }
    int check, c;
    repeat:
    printf("Press '1' for Polynomial addition Program;\nPress '2' for Polynomial multiplition Program;\nEnter the number: ");
    scanf("%d", &check);
    if (check==1)
    polynomial_add(p, q, size_p, size_q);
    else
    polynomial_multiplication(p, q, size_p, size_q);
    printf("\nEnter '1' for YES and '0' for NO;\nDo you want to repeat the program: ");
    scanf("%d", &c);
    if (c)
    goto repeat;
    else
    printf("Thanks for trying out the Program.\n");
    return 0;
}