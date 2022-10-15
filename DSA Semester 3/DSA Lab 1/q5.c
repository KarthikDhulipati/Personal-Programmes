#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], x=1;
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
     while (x<n){
        for (int i=0;i<n-x;i++){
            if (arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        x++;
    }
    for (int i=0;i<n-2;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}