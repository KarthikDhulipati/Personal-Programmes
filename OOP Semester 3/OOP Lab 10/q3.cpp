#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a,b,c,d;
    printf("Enter the numbers: ");
    cin>>a>>b>>c>>d;
    try{
        if (b==0)
        throw b;
        else{
            cout<<"a/b = "<<a/b<<endl;
        }
        if (c<d){
            throw c;
            throw d;
        }
        else
        cout<<"c-d = "<<c-d<<endl;
    }
    catch(...){
        cout<<"The Operations could not be completed due to an exception.";
    }
}