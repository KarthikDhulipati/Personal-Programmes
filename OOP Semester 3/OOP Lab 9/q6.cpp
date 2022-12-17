#include<iostream>
#include<cstdlib>
using namespace std;
void show1(int a, int b){
    cout<<"This is a non-template function"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
template<typename T1, typename T2>
void show1(T1 a, T2 b){
    cout<<"This is a template function"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main(){
    int a=5;
    char b='A';
    float c=3.1456;
    show1(a, a);
    show1(b, c); 
}
