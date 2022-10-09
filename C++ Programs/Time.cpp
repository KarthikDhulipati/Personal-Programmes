#include<iostream>
using namespace std;
int main()
{
    int hrs, mins, secs;
    cout<<"Enter the time in seconds: ";
    cin>>secs;
    hrs=secs/(60*60);
    mins=(secs/60)-(hrs*60);
    secs=secs-((mins*60)+(hrs*60*60));
    cout<<"\nHours: ";
    cout<<hrs;
    cout<<"\nMinutes: ";
    cout<<mins;
    cout<<"\nSeconds: ";
    cout<<secs;
    return 0;
}