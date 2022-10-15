#include<iostream>
using namespace std;
class shape{
    protected:
    int l, b, h;
    float base, height;
    float r, area;
};
class triangle:protected shape{
    public:
    triangle(){
        cout<<"Enter the height and length of base of the triangle: ";
        cin>>base>>height;
        area=(0.5)*base*height;
        cout<<"Area of Triangle = "<<area<<" sq.units"<<endl;
    }
};
class rectangle:protected shape{
    public:
    rectangle(){
        cout<<"Enter the sides of the Rectangle Respectively: ";
        cin>>l>>b>>h;
        area=l*b*h;
        cout<<"Area of Rectangle = "<<area<<" sq.units"<<endl;
    }
};
class circle:protected shape{
    public:
    circle(){
        cout<<"Enter the radius of the circle: ";
        cin>>r;
        area=3.14*r*r;
        cout<<"Area of circle = "<<area<<" sq.units"<<endl;
    }
};
int main(){
    triangle t1;
    rectangle r1;
    circle c1;
    return 0;
}