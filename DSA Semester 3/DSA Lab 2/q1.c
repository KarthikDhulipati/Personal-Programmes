#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n1, n2;
    printf("Enter the number of elements in both arrays: ");
    scanf("%d %d", &n1, &n2);
    int t=n1+n2;
    int arr1[n1], arr2[n2], ans[n1], union1[t];
    printf("Enter Array 1: ");
    for (int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array 2: ");
    for (int i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    for (int i=0;i<n1;i++){
        ans[i]=0;
    }
    int k=0, temp=0;
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (arr1[i]==arr2[j]){
                ans[k++]=arr1[i];
                break;
            }
        }
    }
    printf("Intersection of the 2 arrays: ");
    for (int i=0;i<n1;i++){
        printf("%d ", ans[i]);
    }
    printf("\nUnion of the 2 arrays: ");
    int i=0, j=0;
    for (i=0;i<t && i<n1;i++){
        union1[i]=arr1[i];
    }
    for (i=n1;i<t && j<n2;i++){
        union1[i]=arr2[j];
        j++;
    }
    for (int i=0;i<t-1;i++){
        for (int j=0;j<t-i-1;j++){
            if (union1[j]>union1[j+1]){
                int t=union1[j];
                union1[j]=union1[j+1];
                union1[j+1]=t;
            }
        }
    }
    for (i=0;i<t;i++){
        printf("%d ", union1[i]);
    }
    printf("\nUnion of the 2 arrays: ");
    printf("%d ", union1[0]);
    for (i=1;i<t;i++){
        if (union1[i]!=union1[i-1]){
            printf("%d ", union1[i]);
        }
        else{
            continue;
        }
    }
    return 0;
}