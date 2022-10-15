#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values: ");
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]%2==1){
            for (int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--; //This statement helps in reducing the size of the array by 1 so that we can accomodate for the number which has been removed from the array.
            i--;    //This statement is used to return to the same index after changing the number stored in a[i] to a[i+1] so that we can check if the new number/value at a[i] is even or odd. If found odd, the loop repeats the process.
        }
        else if (a[i]%2==0){
            continue;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}