#include<iostream>
using namespace std;
int main()
{
    float p, q, r, s, s1;
    cout<<"Enter the Resistances p, q r and s(variable resistance) respectively: ";
    cin>>p>>q>>r>>s;
    if((p/q)==(r/s)){
        cout<<"The Wheatstone Bridge is Balanced.\n"<<endl;
    }
    else{
        s1=r*(q/p);
        cout<<"The Wheatstone Bridge is not Balanced."<<endl;
        cout<<"The Resistance of "<<s<<" ohms should be replaced by a "<<s1<<" ohms resistor for the Wheastone Bridge to become balanced.\n";
    }
    return 0;
}