#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the number of rows and coloumns for the array respectively: ";
    cin>>n>>m;
    int a[n][m], i, j, b[n][m], t;
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"For Transpose of the Matrix entered: "<<endl;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (j>i){
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
    }
    cout<<"Transpose of the Matrix entered: "<<endl;
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}