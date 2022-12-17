#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int hrs;
    cout<<"Enter the hours: ";
    cin>>hrs;
    try{
        try{
            if (hrs<12 ){
                throw hrs;
            }
        }
        catch(int h1){
            cout<<"In Nested catch"<<endl;
            if (h1<0)
            throw; //Rethowing an exception
            else
            cout<<"The hrs entered is below 12, i.e. it is a Day."<<endl;
        }
    }
    catch(int h2){
        cout<<"The hrs entered is invalid.";
    }
    if (hrs>12){
        cout<<"Only half of the day remains."<<endl;
    }
}