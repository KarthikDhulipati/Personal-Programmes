#include<stdio.h>
int main()
{
    int n1, n2, n3=100;
    printf("Enter the number of elements in Array 1: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in Array 2: ");
    scanf("%d", &n2);
    double arr1[n1], arr2[n1], arr3[n3];
    printf("Enter Array 1: ");
    for (int i=0;i<n1;i++){
        scanf("%lf", &arr1[i]);
    }
    int x=1;
    while (x<n1){
        for (int i=0;i<n1-x;i++){
            if (arr1[i]>arr1[i+1]){
                double temp=arr1[i];
                arr1[i]=arr1[i+1];
                arr1[i+1]=temp;
            }
        }
        x++;
    }
    printf("Array 1 = ");
    for (int i=0;i<n1;i++){
        printf("%3.2lf ", arr1[i]);
    }
    printf("\n");


    printf("Enter Array 2: ");
    for (int i=0;i<n2;i++){
        scanf("%lf", &arr2[i]);
    }
    x=1;
    while (x<n2){
        for (int i=0;i<n2-x;i++){
            if (arr2[i]>arr2[i+1]){
                double temp=arr2[i];
                arr2[i]=arr2[i+1];
                arr2[i+1]=temp;
            }
        }
        x++;
    }
    printf("Array 2 = ");
    for (int i=0;i<n2;i++){
        printf("%3.2lf ", arr2[i]);
    }
    printf("\n");

    int i, j=0;
    for (i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for (i=n1;i<(n2+n1)+1;i++){
        arr3[i]=arr2[j];   
        j++;     
    }
    arr3[--i]='\0';
    x=1;
    while (x<n1+n2){
        for (int i=0;i<(n1+n2)-x;i++){
            if (arr3[i]>arr3[i+1]){
                double temp=arr3[i];
                arr3[i]=arr3[i+1];
                arr3[i+1]=temp;
            }
        }
        x++;
    }
    int t;
    for (i=0;i<(n1+n2);i++){
        t=arr3[i];
        for (j=0;j<(n1+n2) && j!=i;j++){
            if (t==arr3[j]){
                arr3[j]=0;
            }
        }
    }
    x=1;
    while (x<n1+n2){
        for (int i=0;i<(n1+n2)-x;i++){
            if (arr3[i]>arr3[i+1]){
                double temp=arr3[i];
                arr3[i]=arr3[i+1];
                arr3[i+1]=temp;
            }
        }
        x++;
    }    
    printf("Array 3 = ");
    for (i=0;i<n1+n2;i++){
        printf("%3.2lf ", arr3[i]);
    }
    printf("\n");
    return 0;
}