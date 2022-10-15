#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class DEMO2;
class DEMO1{
    int x;
    public:
    void get(){
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    friend void swap(DEMO1 d1, DEMO2 d2);
};
class DEMO2{
    int x;
    public:
    void get(){
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    friend void swap(DEMO1 d1, DEMO2 d2);
};
void swap(DEMO1 d1, DEMO2 d2){
    cout<<"Before Swapping: "<<endl;
    cout<<"d1.x = "<<d1.x<<setw(12)<<"d2.x = "<<d2.x<<endl;
    int temp=d1.x;
    d1.x=d2.x;
    d2.x=temp;
    cout<<"After Swapping: "<<endl;
    cout<<"d1.x = "<<d1.x<<setw(12)<<"d2.x = "<<d2.x<<endl;
}
int main(){
    system("cls");
    DEMO1 d1;
    DEMO2 d2;
    d1.get();
    d2.get();
    swap(d1, d2);
    return 0;
}