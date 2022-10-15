#include<iostream>
#include<stdlib.h>
using namespace std;
class Time{
    int hrs, mins;
    public:
    void get(){
        cout<<"Enter the Hours: ";
        cin>>hrs;
        cout<<"Enter the Minutes: ";
        cin>>mins;
    }
    Time operator+(Time &t1){
        //Repair the code for the instance where the minutes exceeds 60;
        Time t3;
        t3.hrs=hrs+t1.hrs;
        t3.mins=mins+t1.mins;
        return t3;
    }
    void display(){
        cout<<"Hours = "<<hrs<<endl;
        cout<<"Minutes = "<<mins<<endl;
    }
    friend bool operator==(Time &t1, Time &t2);
    friend bool operator>=(Time &t1, Time &t2);
    friend bool operator<=(Time &t1, Time &t2);
};
bool operator==(Time &t1, Time &t2){
    return ((t1.hrs==t2.hrs));
}
bool operator>=(Time &t1, Time &t2){
    return ((t1.hrs>=t2.hrs));
}
bool operator<=(Time &t1, Time &t2){
    return ((t1.hrs<=t2.hrs));
}
int main()
{
    system("cls");
    Time t1, t2, t3;
    t1.get();
    t2.get();
    t3=t1+t2;
    t3.display();
    if (t1==t2){
        cout<<"The two objects are equal.\n";
    }
    else if (t1>=t2){
        cout<<"Object t1 is greater than t2\n";
    }
    else if (t1<=t2){
        cout<<"Object t2 is greater than t1\n";
    }
    return 0;
}