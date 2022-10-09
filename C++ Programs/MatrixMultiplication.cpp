#include<iostream>
using namespace std;
int main()
{
    int n1, m1, n2, m2;
    cout<<endl<<"Enter the number of rows and coloumns respectively for Matrix 1: "<<endl;
    cin>>n1>>m1;
    cout<<"Enter the number of rows and coloumns respectively for Matrix 2: "<<endl;
    cin>>n2>>m2;
    int i, j, k, a[n1][m1], b[n2][m2], c[n1][m2];
    if (m1==n2){
        cout<<"Enter the values for Matrix 1: "<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m1;j++){
                
                cin>>a[i][j];
            }
        }
        cout<<endl<<"This is Matrix 1: "<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m1;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Enter the values for Matrix 2: "<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m1;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl<<"This is Matrix 2: "<<endl;
        for (i=0;i<n2;i++){
            for (j=0;j<m2;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m2;j++) //Here, we can also use n1 instead of m2 to get the results since they will only give us the loop counter from 0, 1, 2 in case of a 3x3 matrix.//
            {
                c[i][j]=0;
                for (k=0;k<m2;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl<<"(Matrix 1) x (Matrix 2) ="<<endl;
        for (i=0;i<n1;i++){
            for (j=0;j<m2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        cout<<"Thanks for trying out the program."<<endl<<endl;
    }
    else{
        cout<<"The Matrix Multiplication solution doesn't exist since the number of coulumns of Matrix 1 is not equal to the number of rows of Matrix 2."<<endl<<endl;
    }
    return 0;
}