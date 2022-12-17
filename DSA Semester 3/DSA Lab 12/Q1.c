#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    int choice;
    printf("\nFor Selection Sort Program: 1;\nFor Insertion Program: 2;\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:{
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
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        }
        case 2:{
            int temp, i, j;
            for (int i=1;i<n;i++){
                temp=arr[i];
                j=i-1;
                while(j>=0 && arr[j]>temp){
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=temp;
            }
            for (i=0;i<n;i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        }
        default:{
            printf("Invalid Entry.\n");
            break;
        }
    }
    return 0;
}