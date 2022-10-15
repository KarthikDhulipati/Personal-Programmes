#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int element=0, flag=1;
    printf("Enter the element to find in the array: ");
    scanf("%d", &element);
    for (int i=0;i<n;i++){
        if (element==arr[i]){
            printf("The element %d exists in the array.\n", element);
            flag=0;
            break;
        }
    }
    int count=0;
    if (flag==0){
        for (int i=0;i<n;i++){
            if (element==arr[i]){
                count++;
            }
        }
        printf("The number of times %d is repeated in the array = %d\n", element, count);
    }
    else{
        printf("Since the number does not exist in the array, it is repeated 0 times.\n");
    }
    return 0;
}