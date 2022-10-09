#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year to find if it is a Leap year or not: ";
    cin>>year;
    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                cout<<"The year is a Leap Year.\n";
            }
            else{
                cout<<"The year is not a Leap Year.\n";
            }
        }
        else{
            cout<<"The year is a Leap Year.\n";
        }
    }
    else{
        cout<<"The year is not a Leap Year.\n";
    }
    return 0;
}