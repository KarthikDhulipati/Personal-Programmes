#include<iostream>
using namespace std;
int main()
{
    int r1, r2, r3;
    float s, p, is, ip, v;
    cout<<"Enter the value of the 3 resistances: ";
    cin>>r1;
    cin>>r2;
    cin>>r3;
    cout<<"Enter the amount of Voltage: ";
    cin>>v;
    s=r1+r2+r3;
    p=(1/(float)r1)+(1/(float)r2)+(1/(float)r3);
    is=v/s;
    ip=v/p;
    cout<<"Total resistance in SERIES = ";
    cout<<s<<endl;
    cout<<"Total resistance in PARALLEL = ";
    cout<<p<<endl;
    cout<<"The Current in Series Resistance = ";
    cout<<is<<endl;
    cout<<"The Current in Parallel Resistance = ";
    cout<<ip<<endl;
    return 0;
}