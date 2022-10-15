#include<iostream>
#include<stdlib.h>
using namespace std;
class distance1{
    float inches, feet;
    public:
    void get(){
        cout<<"Enter the distance in Inches: ";
        cin>>inches;
        feet=inches/12;
    }
    distance1 operator+(distance1 &d2){
        distance1 d3;
        d3.inches=inches+d2.inches;
        d3.feet=feet+d2.feet;
        return d3;
    }
    distance1 operator+(int a){
        distance1 d;
        d.inches=inches+a;
        d.feet=d.inches/12;
        return d;
    }
    distance1 operator-(){
        distance1 d;
        d.inches=-inches;
        d.feet=-feet;
        return d;
    }
    void display(){
        cout<<"Inches = "<<inches<<endl;
        cout<<"feet = "<<feet<<endl;
    }
};
int main(){
    system("cls");
    distance1 d1, d2, d3;
    d1.get();
    d2.get();
    cout<<endl<<"Adding Two Objects at once."<<endl;
    d3=d1+d2;
    d3.display();
    int num;
    cout<<endl<<"Adding the inches of the Object 1 with an integer at once."<<endl;
    cout<<"Enter the number to be added to the inches of the object: ";
    cin>>num;
    d3=d1+num;
    d3.display();
    cout<<endl<<"Using UNARY(-) at Object 2."<<endl;
    d3=-d2;
    d3.display();
    return 0;
}