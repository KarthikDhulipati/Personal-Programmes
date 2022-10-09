#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the number of rows and coloumns of the matrix: "<<endl;
    cin>>n>>m;
    if (n==m){
    int a[n][m];
    cout<<"Enter the matrix: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    cout<<"This is the Matrix entered: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (j>i){
                int t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
    }
    cout<<"This is the transpose of the Matrix entered."<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int flag1=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]==b[i][j]){
                flag1=1;
            }
            else{
                flag1=0;
                break;
            }
        }
    }
    if (flag1){
        cout<<"The Matrix entered is a Symmetric Matrix."<<endl;
    }
    else{
        cout<<"The Matrix entered is neither a Symmetric nor a Skew Symmetric Matrix."<<endl;
    }
    }
    else{
        cout<<"Since the number of rows is not equal to the number of coloumns, the matrix is not a Square Matrix. So, the matrix is not a Symmetric Matrix."<<endl;
    }
}