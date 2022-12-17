#include<iostream>
using namespace std;
class Inch{
    public:
    float inches;
    void get(){
        cout<<"Enter the distance in inches: ";
        cin>>inches;
    }
    void display(){
        cout<<"The distance in Inches is: "<<inches<<endl;
    }
};
class Feet{
    public:
    float feet;
    Feet(){
        feet=0;
    }
    Feet(Inch i){
        feet=(i.inches)/12;   
    }
    void operator=(Inch &i){
        feet=(i.inches)/12;   
    }
    void display(){
        cout<<"The distance in Feet is: "<<feet<<endl;
    }
};
int main(){
    Inch i;
    i.get();
    i.display();
    Feet f, f1=i;
    f=i;
    f.display();//Using Operator Overloading
    f1.display();//Using Constructors
    return 0;
}