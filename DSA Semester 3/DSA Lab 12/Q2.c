#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    char arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the alphabet: ");
        scanf(" %c", &arr[i]);
    }
    int minterm;
    for (int i=0;i<n-1;i++){
        minterm=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        int temp;
        temp=arr[minterm];
        arr[minterm]=arr[i];
        arr[i]=temp;
    }
    for (int i=0;i<n;i++){
        printf("%c ", arr[i]);
    }
    printf("\n");
}