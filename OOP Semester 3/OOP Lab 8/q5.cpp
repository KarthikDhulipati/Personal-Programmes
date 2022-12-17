#include<iostream>
#include<cstdlib>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"In Base Class"<<endl;
    }
    virtual ~Base(){
        cout<<"In Base Destructor"<<endl;
    }
};
class Derived1: public Base{
    public:
    Derived1(){
        cout<<"In Derived1 Class"<<endl;
    }
    ~Derived1(){
        cout<<"In Derived1 Destructor"<<endl;
    }
};
int main(){
    Derived1 *d1=new Derived1();
    Base *b1=d1;
    delete b1;
    return 0;
}