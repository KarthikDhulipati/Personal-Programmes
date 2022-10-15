#include<iostream>
#include<cstdlib>
using namespace std;
class complex{
    int real, img;
    public:
    void get(){
        cin>>real>>img;
    }
    void display(){
        cout<<real<<" + i("<<img<<")"<<endl;
    }
};
int main(){
    system("cls");
    int n;
    cout<<"Enter the number of entries: ";
    cin>>n;
    complex c[n];
    cout<<"Enter the Real and Imaginary part of the number: ";
    for (int i=0;i<n;i++){
        c[i].get();
    }
    for (int i=0;i<n;i++){
        c[i].display();
    }
    return 0;
}