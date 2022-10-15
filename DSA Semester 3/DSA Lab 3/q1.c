#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the number of elements for the Square Sparse Matrix: ");
    scanf("%d", &n);
    int a[n][n], b[3][3], sum[3][3];
    printf("Enter the Square Sparse Matrix: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    int t;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (j>i){
                t=b[i][j];
                b[i][j]=b[j][i];
                b[j][i]=t;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (sum[i][j]!=0){
                count++;
            }
        }
    }
    printf("Number of Non-Zero elements = %d\n\n", count);
    int x=count+1, table[x][3], k;
    table[0][0]=3;  //Here, since the first row of the triplet denotes the number of rows, coloumns and the number of non-zero elements, I have manually declared the first row for the triplet.
    table[0][1]=3;
    table[0][2]=count;
    k=1;
    for (int i=0;i<n;i++){    //The values of n and m are taken in the loop so that we can check if the matrix 'sum' is 0 or non-zero.
        for (int j=0;j<n;j++){
            if (sum[i][j]!=0){
                table[k][0]=i;
                table[k][1]=j;
                table[k][2]=sum[i][j];
                k++; //Here, since all the coloumns have been declared for the triplet, we are incrementing k inside the loop and not outside.
            }
        }
    }
    printf("Rows  Coloumn\tValue\n");
    for (int i=0;i<(count+1);i++){
        for (int j=0;j<3;j++){
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}