#include<iostream>
#include<cstdlib>
using namespace std;
class Test{
    int count;
    public:
    Test(){
        count=5;
    }
    //For pre-decrement Operation.
    Test operator--(){
        Test c;
        c.count=--count;
        return c;
    }
    Test operator--(int){
        Test c;
        c.count=count--;
        return c;
    }
    void display(){
        cout<<"Count = "<<count;
    }
};
int main()
{
    Test c;
    --c;
    c.display();
    c--;
    cout<<endl;
    c.display();
    return 0;
}
