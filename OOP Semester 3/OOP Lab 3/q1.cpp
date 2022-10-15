#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
float area(int a, int b, int c){
    int s=(a+b+c)/2, ar, t;
    t=s*(s-a)*(s-b)*(s-c);
    ar=sqrt(t);
    return ar;
}
int area(int l, int b){
    int a=l*b;
    return a;
}
float area(int r){
    float a=3.14*r*r;
    return a;
}
int main()
{
    system("cls");
    int a, b, t1, t2, t3, r;
    cout<<"Enter the length of the sides of the triangle: ";
    cin>>t1>>t2>>t3;
    cout<<"Enter the Radius of the circle: ";
    cin>>r;
    cout<<"Enter the Length and Breadth of the Rectangle: ";
    cin>>a>>b;
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    cout<<endl<<"Area of The Triangle = "<<area(t1, t2, t3)<<" sq.units"<<endl;
    cout<<"Area of The Circle = "<<area(r)<<" sq.units"<<endl;
    cout<<"Area of The Rectangle = "<<area(a,b)<<" sq.units"<<endl;
    return 0;
}