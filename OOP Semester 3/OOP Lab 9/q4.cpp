#include<iostream>
#include<cstdlib>
using namespace std;
template<class T1, class T2>
void show(T1 a, T2 b){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
template<>
void show(int a, double b){
    cout<<"This is a Specialization function."<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main(){
    int x=5;
    float y=3.1456;
    double z=4.5;
    show<int, float>(x,y);
    cout<<endl;
    show<int, double>(x,z);
}