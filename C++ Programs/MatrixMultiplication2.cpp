#include<iostream>
using namespace std;
int main()
{
    int n1, m1, n2, m2;
    cout<<"Enter the number of rows and coloumns for Matrix 1: ";
    cin>>n1>>m1;
    cout<<"Enter the number of rows and coloumns for Matrix 2: ";
    cin>>n2>>m2;
    if (m1==n2){
        int a[n1][m1], b[n2][m2], c[n1][m2];
        cout<<"Enter Matrix 1: "<<endl;
        for (int i=0;i<n1;i++){
            for (int j=0;j<m1;j++){
                cin>>a[i][j];
            }
        }
        cout<<"This is Matrix 1: "<<endl;
        for (int i=0;i<n1;i++){
            for (int j=0;j<m1;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Enter Matrix 2: "<<endl;
        for (int i=0;i<n2;i++){
            for (int j=0;j<m2;j++){
                cin>>b[i][j];
            }
        }
        cout<<"This is Matrix 2"<<endl;
        for (int i=0;i<n1;i++){
            for (int j=0;j<m1;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        int i, j, k;
        for (i=0;i<n1;i++){
            for (j=0;j<n1;j++)
            {
                c[i][j]=0;
                for (k=0;k<m1;k++){
                    c[i][j]+=a[i][k]*b[k][i];
                }
            }
        }
        cout<<"(Matrix 1)x(Matrix 2) = "<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else{
        cout<<"The multiplication of the matrices of the given orders is not possible."<<endl;
    }
}