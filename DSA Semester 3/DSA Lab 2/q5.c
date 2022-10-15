#include<stdio.h>
#include<stdlib.h>
int add(float a1[], float a2[], int n1, int n2){
    float ans[n1];
    for (int i=0;i<n1;i++){
        ans[i]=a1[i]+a2[i];
    }
    printf("Sum = ");
    for (int i=0;i<n1;i++){
        printf("%5.1f ", ans[i]);
    }
    printf("\n");
}
int sub(float a1[], float a2[], int n1, int n2){
    float ans[n1];
    for (int i=0;i<n1;i++){
        ans[i]=a1[i]-a2[i];
    }
    printf("Difference = ");
    for (int i=0;i<n1;i++){
        printf("%5.1f ", ans[i]);
    }
    printf("\n");
}
int division(float a1[], float a2[], int n1, int n2){
    float ans[n1];
    for (int i=0;i<n1;i++){
        ans[i]=a1[i]/a2[i];
    }
    printf("Division = ");
    for (int i=0;i<n1;i++){
        printf("%5.1f ", ans[i]);
    }
    printf("\n");
}
int multiply(float a1[], float a2[], int n1, int n2){
    float ans[n1];
    for (int i=0;i<n1;i++){
        ans[i]=a1[i]*a2[i];
    }
    printf("Product = ");
    for (int i=0;i<n1;i++){
        printf("%5.1f ", ans[i]);
    }
    printf("\n");
}
int main()
{
    system("cls");
    int n1, n2;
    printf("Enter the number of elements in the array 1: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the array 2: ");
    scanf("%d", &n2);
    if (n1==n2){
    printf("Enter Array 1: ");
    float arr1[n1], arr2[n2];
    for (int i=0;i<n1;i++){
        scanf("%f", &arr1[i]);
    }
    printf("Enter Array 2: ");
    for (int i=0;i<n2;i++){
        scanf("%f", &arr2[i]);
    }
    int sum, diff, div, mul;
    add(arr1, arr2, n1, n2);
    sub(arr1, arr2, n1, n2);
    division(arr1, arr2, n1, n2);
    multiply(arr1, arr2, n1, n2);
    return 0;
    }
    else{
        printf("Since the number of elements for both the arrays is not same, the program is terminated.\n");
        return 0;
    }
}