#include<iostream>
using namespace std;
template<class T1,class T2>
class Test{
    public:
    Test(T1 a, T2 b){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
template<>
class Test<int, int>{
    public:
    void show(int a, int b){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"This is a specialized Function of the class."<<endl;
    }
};
int main(){
    int x=5, z=7;
    float y=3.1456;
    Test<int, int> a1;
    Test<char, double> a2('A', 3.14);
    cout<<endl;
    a1.show(x,z);
    return 0;
}