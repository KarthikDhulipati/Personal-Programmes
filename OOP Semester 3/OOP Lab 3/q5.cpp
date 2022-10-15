#include<iostream>
#include<stdlib.h>
using namespace std;
class Matrix{
    int arr[3][3];
    public:
    void get(){
        cout<<"Enter the matrix: \n";
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
    }
    void transpose(){
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (j<i){
                    int temp=arr[i][j];
                    arr[i][j]=arr[j][i];
                    arr[j][i]=temp;
                }
            }
        }
    }
    void display(){
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    system("cls");
    Matrix a;
    a.get();
    cout<<endl<<"The Matrix entered is: "<<endl;
    a.display();
    a.transpose();
    cout<<endl<<"The transpose of the Matrix entered is: "<<endl;
    a.display();
    return 0;
}