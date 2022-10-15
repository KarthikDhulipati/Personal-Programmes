#include<iostream>
#include<cstdlib>
using namespace std;
class dist2;
class dist1{
    float inches, feet;
    public:
    void get(){
        cout<<"Enter the distance in feet: ";
        cin>>feet;
    }
    void display(){
        inches=feet*12;
        cout<<"Distance in feet: "<<feet<<endl; 
        cout<<"Distance in inches: "<<inches<<endl;
    }
    friend int compare(dist1 d1, dist2 d2);
};
class dist2{
    float meter, cm;
    public:
    void get(){
        cout<<"Enter the distance in meters: ";
        cin>>meter;
    }
    void display(){
        cm=meter*100;
        cout<<"Distance in meters: "<<meter<<endl; 
        cout<<"Distance in centimeters: "<<cm<<endl;
    }
    friend int compare(dist1 d1, dist2 d2);
};
int compare(dist1 d1, dist2 d2){
    float m_feet;
    int d;
    m_feet=d2.meter/0.3048;
    if (d1.feet>m_feet)
    d=1;
    else if (d1.feet<m_feet)
    d=2;
    else
    d=0;
    return d;
}
int main()
{
    system("cls");
    dist1 d1;
    dist2 d2;
    int t;
    d1.get();
    d2.get();
    t=compare(d1, d2);
    if (t==1){
        d1.display();
    }
    else if (t==2){
        d2.display();
    }
    else if (t==0){
        cout<<"Both the distances are the same."<<endl;
    }
    return 0;
}