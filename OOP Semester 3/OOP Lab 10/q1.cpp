#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    try{
        if (b==0){
            throw(b);
        }
        else{
            cout<<"a/b = "<<a/b<<endl;
        }
    }
    catch(int b){
        cout<<"The value of b entered is invalid.\n";
    }
    return 0;
}