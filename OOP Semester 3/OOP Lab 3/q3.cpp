#include<iostream>
#include<stdlib.h>
using namespace std;
class evenodd{
    int arr[10];
    public: 
    void get(){
        cout<<"Enter the array: \n";
        for (int i=0;i<10;i++){
            cin>>arr[i];
        }
    }
    void display(){
        int evensum=0, oddsum=0;
        for (int i=0;i<10;i++){
            if (arr[i]%2==0){
                evensum+=arr[i];
            }
            else{
                oddsum+=arr[i];
            }
        }
        cout<<"Sum of Even Numbers: "<<evensum<<endl;
        cout<<"Sum of Odd Numbers: "<<oddsum<<endl;
    }
};
int main()
{
    system("cls");
    evenodd a;
    a.get();
    a.display();
    return 0;
}