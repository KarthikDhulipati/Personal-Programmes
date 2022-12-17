#include<iostream>
#include<cstdlib>
using namespace std;
class shape{
    protected:
    float radius;
    int side, height, base;
    float a;
    public:
    virtual void get()=0;
    virtual void area()=0;
};
class Triangle: public shape{
    public:
    // Here, I guess that if the names of the pure virtual classes are made to be zero, then the previous pure virtual function with the same name gets overridden by the function of the derived class. If there is any function whose name is different and distinct and is made virtual in the base class, then it will not allow any other class's object to be created.
    void get(){
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
    void get(){
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
    void get(){
        cout<<"Enter the side of the square: ";
        cin>>side;
        a=side*side;
    }
    void area(){
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
    s1->get();
    s1->area();
    s2->get();
    s2->area();
    s3->get();
    s3->area();
    return 0;
}