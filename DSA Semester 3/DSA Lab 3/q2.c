#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n, m;
    printf("Enter the number of elements in array A and B respectively: ");
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    printf("Enter the value for A: ");
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the value for B: ");
    for (int i=0;i<(m-n);i++){
        scanf("%d", &b[i]);
    }
    int j=0;
    for (int i=(m-n);i<(m+n);i++){
        b[i]=a[j++];
    }
    printf("The B array is: \n");
    for (int i=0;i<m;i++){
        printf("%d ", b[i]);
    }
    return 0;
}