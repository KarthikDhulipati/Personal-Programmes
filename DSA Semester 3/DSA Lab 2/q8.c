#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    //To reverse the elements of the array.
    int t=n-1;
    for (i=t;i>=n/2;i--){
        int temp=arr[i];
        arr[i]=arr[t-i];
        arr[t-i]=temp;
    }
    for (i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}