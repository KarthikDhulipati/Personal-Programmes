#include<iostream>
#include<cstdlib>
using namespace std;
template<class A>
class Test{
    public:
    static int count;
    void show(A x){
        count++;
        cout<<"Count = "<<count<<endl;
    }
};
template<class A>
int Test<A>::count=0;
int main(){
    int x;
    char ch;
    Test<int> a;
    Test<char>b;
    Test<int> c;
    a.show(x);
    b.show(ch);
    c.show(x);
    return 0;
}