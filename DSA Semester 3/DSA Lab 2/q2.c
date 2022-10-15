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
    int count[n];
    for (int i=0;i<n;i++){
        count[i]=0;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count[i]++;
            }
        }
    }
    int min=count[0], t, i;
    for (i=0;i<n;i++){
        if (count[i]<min){
            min=count[i];
            t=i;
        }
    }
    printf("The entry with lowest frequency = %d\n", arr[t]);
    printf("Lowest Frequency = %d\n", min);
    return 0;
}