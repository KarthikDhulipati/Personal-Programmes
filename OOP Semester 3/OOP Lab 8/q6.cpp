#include<iostream>
#include<cstdlib>
using namespace std;
class Box{
    float h, l, v, b;
    public:
    Box(){
        cout<<"Enter the Height, Breadth and the Length of the Box Respectively: ";
        cin>>h>>b>>l;
    }
    void find_volume(){
        v=l*b*h;
    }
    float vol_return(){
        return v;
    }
    bool operator >(Box x){
        return (this->v>x.v);
    }
    bool operator <(Box x){
        return (this->v<x.v);
    }
    bool operator ==(Box x){
        return (this->v==x.v);
    }
};
int main(){
    Box a, b;
    a.find_volume();
    b.find_volume();
    if (a>b){
        cout<<"The Box 2 has Smaller Volume: "<<b.vol_return()<<" sq.units"<<endl;
    }
    else if (a<b){
        cout<<"The Box 1 has Smaller Volume: "<<a.vol_return()<<" sq. units"<<endl;
    }
    else if (a==b){
        cout<<"Both the boxes have same Volume i.e. : "<<a.vol_return()<<" sq.units"<<endl;
    }
    return 0;
}

