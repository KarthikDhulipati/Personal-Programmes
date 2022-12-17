#include<iostream>
#include<cstdlib>
using namespace std;
class shape{
    protected:
    float radius;
    int side, height, base;
    float a;
    public:
    virtual void area(){
        a=side*side;
        cout<<"The Area of the Square is: "<<a<<" sq.units"<<endl;
    }
};
class Triangle: public shape{
    public:
    Triangle(){
        cout<<"Enter the height and base of the triangle: ";
        cin>>height>>base;
    }
    void area(){
        a=0.5*base*height;
        cout<<"The Area of the Triangle is: "<<a<<" sq.units"<<endl;
    }
};
class Circle: public shape{
    public:
    Circle(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
    void area(){
        a=3.14*radius*radius;
        cout<<"The Area of the Circle is: "<<a<<" sq.units"<<endl;
    }
};
class Square: public shape{
    public:
    Square(){
        cout<<"Enter the side of the square: ";
        cin>>side;
    }
    void display(){
        cout<<"The Area of the Square is: "<<a<<" sq.units"<<endl;
    }
};
int main(){
    shape *s1, *s2, *s3;
    Triangle t;
    Square sq;
    Circle c;
    s1=&t;
    s2=&c;
    s3=&sq;
    s1->area();
    s2->area();
    s3->area();
    return 0;
}
