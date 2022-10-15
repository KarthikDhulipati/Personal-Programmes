#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n1, n2, n3;
    printf("Enter the size of the three arrays respectively: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr1[n1], arr2[n2], arr3[n3], ans[n1];
    printf("Enter Array 1: ");
    for (int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter Array 2: ");
    for (int i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    printf("Enter Array 3: ");
    for (int i=0;i<n3;i++){
        scanf("%d", &arr3[i]);
    }
    for (int i=0;i<n1;i++){
        ans[i]=0;
    }
    int z=0;
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (arr1[i]==arr2[j]){
                for (int k=0;k<n3;k++){
                    if (arr1[i]==arr3[k]){
                        ans[z++]=arr1[i];
                    }
                    else{
                        continue;
                    }
                }
            }
            else{
                continue;
            }
        }
    }
    
    printf("Common Elements Array: ");
    for (int i=0;i<n1;i++){
        printf("%d ", ans[i]);
    }
    return 0;
}