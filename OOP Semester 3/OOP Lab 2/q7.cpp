#include<iostream>
#include<cmath>
#include<stdlib.h>
#define sqr(z) z*z
using namespace std;
class coordinates{
    float x, y;
    public:
    void get(){
        cout<<"Enter the 'x' and 'y' coordinates respectively: ";
        cin>>x>>y;
    }
    float slope(coordinates p2){
        float d, a, b;
        a=p2.x-x;
        b=p2.y-y;
        d=sqrt(sqr(a)+sqr(b));
        return (d);
    }
};
int main()
{
    system("cls");
    float m;
    int roll_no=2105800;
    coordinates c1, c2;
    cout<<"Roll No. : "<<roll_no<<endl;
    c1.get();
    c2.get();
    m=c1.slope(c2);
    cout<<"The Distance between the 2 coordinates is: "<<m<<" units."<<endl;
    return 0;
}