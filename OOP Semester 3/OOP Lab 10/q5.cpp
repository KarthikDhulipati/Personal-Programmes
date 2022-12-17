#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int mins, hrs, secs;
    cout<<"Enter the minutes, hours and seconds repectively: ";
    cin>>mins>>hrs>>secs;
    try{
        if (hrs<0 || hrs>24){
            throw hrs;
        }
    }
    catch(int h){
        cout<<"Invalid hrs entered."<<endl;
    }
    try{
        if (mins<0 || mins>60){
            throw (mins);
        }
    }
    catch(int m){
        cout<<"Invalid mins entered."<<endl;
    }
    try{
        if (secs<0 || secs>60){
            throw (secs);
        }
    }
    catch(int s){
        cout<<"Invalid secs entered."<<endl;
    }
    cout<<hrs<<" Hours; "<<mins<<" Minutes; "<<secs<<" Seconds"<<endl;
}