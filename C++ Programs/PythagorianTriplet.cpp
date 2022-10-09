#include<iostream>
using namespace std;
bool CHECK(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a==x){
        b=y;
        c=z;
    }
    else if (a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if (a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int x, y, z;
    cout<<"Enter the number: ";
    cin>>x>>y>>z;
    if (CHECK(x,y,z)){
        cout<<"The numbers entered is a Pythagorian Triplet."<<endl;
    }
    else{
        cout<<"The numbers entered is not a Pythagorian Triplet."<<endl;
    }
}