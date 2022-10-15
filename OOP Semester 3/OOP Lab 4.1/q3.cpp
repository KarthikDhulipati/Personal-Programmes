#include<iostream>
#include<cstdlib>
using namespace std;
class volume{
    public:
    void cuboid(double l=1, int b=1, float h=1){
        cout<<"Area of the Cuboid is: "<<l*b*h<<" cube units"<<endl;
    }
    void sphere(float r=1){
        cout<<"Volume of the Sphere is: "<<(4/3)*3.14*r*r*r<<" cube units"<<endl;
    }
    void cylinder(int h=1, double r=1){
        cout<<"Volume of the Cylinder is: "<<3.14*r*r*h<<" cube units"<<endl;
    }
};
int main(){
    system("cls");
    volume v;
    v.cuboid(3, 5, 2);
    v.sphere(6.053);
    v.cylinder(4, 9);
    v.cylinder(5);
    return 0;
}