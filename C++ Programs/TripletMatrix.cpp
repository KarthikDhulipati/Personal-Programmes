#include<iostream>
using namespace std;
int main()
{
    int sparse[3][3];
    cout<<"Enter the elements for the Matrix: \n";
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>sparse[i][j];
        }
    }
    cout<<"The matrix entered is : \n";
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<sparse[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"The triplet matrix: "<<endl;
    int count=0, x;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (sparse[i][j]!=0){
                count++;
            }
        }
    }
    x=count+1;
    int table[x][3], k=1;
    table[0][0]=3;
    table[0][1]=3;
    table[0][2]=count;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (sparse[i][j]!=0){
                table[k][0]=i+1;
                table[k][1]=j+1;
                table[k][2]=sparse[i][j];
                k++;
            }
        }
    }
    for (int i=0;i<x;i++){
        for (int j=0;j<3;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}