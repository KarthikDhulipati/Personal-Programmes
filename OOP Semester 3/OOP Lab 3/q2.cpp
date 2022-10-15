#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
float Volume(float r, float h){
    float v=3.14*r*r*h;
    return v;
}
int Volume(int s){
    int a=s*s*s;
    return a;
}
float Volume(float r1){
    float v=((4*3.14)/3)*r1*r1*r1;
    return v;
}
int main()
{
    system("cls");
    int  a;
    float r1, h, r;
    cout<<"Enter the height and the radius of the cylinder: ";
    cin>>h>>r;
    cout<<"Enter the Radius of the sphere: ";
    cin>>r1;
    cout<<"Enter the Length of a side of the Cube: ";
    cin>>a;
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    cout<<endl<<"Volume of The Cylinder = "<<Volume(r, h)<<" sq.units"<<endl;
    cout<<"Volume of The Sphere = "<<Volume(r1)<<" sq.units"<<endl;
    cout<<"Volume of The Cube = "<<Volume(a)<<" sq.units"<<endl;
    return 0;
}