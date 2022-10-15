#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n, m;
    printf("Enter the number of rows and coloumns for the Sparse Matrix: ");
    scanf("%d %d", &n, &m);
    int s[n][m];
    printf("Enter the Matrix: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d", &s[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int flag=0, count=0;
    for (int j=(m-1);j>=0;j--){
        for (int i=0;i<n;i++){
            if (s[i][j]==0){
                flag++;
            }
        }
        if (flag==n){
            count++;
        }
        flag=0;
    }
    m=m-count;
    int count1=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (s[i][j]!=0){
                count1++;
            }
        }
    }
    printf("Number of non-zero elements = %d\n\n", count1);
    int x=count1+1, table[x][3], k;
    table[0][0]=n;
    table[0][1]=m;
    table[0][2]=count1;
    k=1;
    for (int i=0;i<n;i++){    
        for (int j=0;j<m;j++){
            if (s[i][j]!=0){
                table[k][0]=i;
                table[k][1]=j;
                table[k][2]=s[i][j];
                k++;
            }
        }
    }
    printf("Rows  Coloumn\tValue\n");
    for (int i=0;i<(count1+1);i++){
        for (int j=0;j<3;j++){
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}