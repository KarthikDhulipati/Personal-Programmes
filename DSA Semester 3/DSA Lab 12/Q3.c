#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n, count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    int minterm;
    for (int i=0;i<n-1;i++){
        minterm=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minterm]){
                minterm=j;
                count++;
            }
        }
        int temp;
        temp=arr[minterm];
        arr[minterm]=arr[i];
        arr[i]=temp;
    }
    printf("The number of swaps required is: %d\n", count);
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}