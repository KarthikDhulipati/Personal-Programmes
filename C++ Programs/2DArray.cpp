#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and coloumns for the array respectively: ";
    cin>>n>>m;
    int a[n][m], i, j;
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}