#include<iostream>
#include<cstdlib>
using namespace std;
template<class T>
class test{
    T a, b;
    public:
    test(T &x, T &y){
        a=x;
        b=y;
    }
    void swap1(){
        cout<<"Values Before swapping : x = "<<a<<" ; "<<"y = "<<b<<endl;
        T t=a;
        a=b;
        b=t;
        cout<<"Values After swapping : x = "<<a<<" ; "<<"y = "<<b<<endl;
    }
};
template <typename U>
void swap2(U &x, U &y){
    cout<<"Values Before swapping : x = "<<x<<" ; "<<"y = "<<y<<endl;
    U t=x;
    x=y;
    y=t;
    cout<<"Values After swapping : x = "<<x<<" ; "<<"y = "<<y<<endl;
}
int main(){
    int x1, y1;
    char x2, y2;
    float x3, y3;
    double x4, y4;
    cout<<"Enter the integer values: ";
    cin>>x1>>y1;
    swap2<int>(x1, y1);
    cout<<"Enter the float values: ";
    cin>>x3>>y3;
    swap2<float>(x3, y3);
    cout<<"Enter the char values: ";
    cin>>x2>>y2;
    test a1(x2, y2);
    a1.swap1();
    cout<<"Enter the double values: ";
    cin>>x4>>y4;
    test a2(x4, y4);
    a2.swap1();
    return 0;
}