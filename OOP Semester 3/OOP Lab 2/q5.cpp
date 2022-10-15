#include<iostream>
#include<stdlib.h>
using namespace std;
class distance1{
    public:
    float inches, feet;
    void get(){
        cout<<"Enter the distance in feet: ";
        cin>>feet;
        inches=feet/0.0834;
    }
    distance1 adddistance(distance1 b){
        distance1 temp;
        temp.inches=inches+b.inches;
        temp.feet=feet+b.feet;
        return temp;
    }
};
int  main()
{
    system("cls");
    distance1 a, b, d;
    int roll_no=2105800;
    a.get();
    b.get();
    d=a.adddistance(b);
    cout<<"Total Distance in Feet = "<<d.feet<<endl;
    cout<<"Total Distance in Inches = "<<d.inches<<endl;
    cout<<"Roll No. : "<<roll_no;
    return 0;
}