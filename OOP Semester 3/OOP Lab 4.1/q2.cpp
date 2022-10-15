#include<iostream>
#include<cstdlib>
using namespace std;
class Test{
    int x;
    public:
    void get(){
        cout<<"Enter the number: ";
        cin>>x;
    }
    int sqr(Test p1);
    int cube(Test p1);
};
inline int Test::sqr(Test p1){
    return (p1.x*p1.x);
}
inline int Test::cube(Test p1){
    return (p1.x*p1.x*p1.x);
}
int main(){
    system("cls");
    Test a;
    a.get();
    cout<<"Square of the value Entered is: "<<a.sqr(a)<<endl;
    cout<<"Cube of the value Entered is: "<<a.cube(a)<<endl;
    return 0;
}