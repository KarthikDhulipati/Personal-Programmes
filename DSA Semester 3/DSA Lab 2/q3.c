#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n1, n2;
    printf("Enter the number of elements in both the arrays: ");
    scanf("%d %d", &n1, &n2);
    int arr1[n1], arr2[n2];
    printf("Enter Array 1: ");
    for (int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array 2: ");
    for (int i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    int x;
    printf("Enter the number 'x': ");
    scanf("%d", &x);
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (arr1[i]+arr2[j]==x){
                printf("%d and %d\n", arr1[i], arr2[j]);
            }
            else{
                continue;
            }
        }
    }
    return 0;
}