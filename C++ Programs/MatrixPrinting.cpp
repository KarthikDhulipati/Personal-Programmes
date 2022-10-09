#include<iostream>
using namespace std;
int main()
{
    int m[3][3], i, j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<"Enter the values of matrix: ";
            cin>>m[i][j];
        }
    }
    for (i=0;i<3;i++){
        for(j=0;i<3;j++){
            cout<<m[i][j];
        }
        cout<<endl;
    }
}