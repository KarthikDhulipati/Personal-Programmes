#include<iostream>
#include<cstdlib>
using namespace std;
template<class A, class B>
class Test{
    A a;
    B b;
    public:
    Test(A x,B y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a = "<<a<<"\nb = "<<b<<endl;
    }
};
int main(){
    Test <float,int>t1(3.33, 4);
    t1.show();
    return 0;
}