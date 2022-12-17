#include<iostream>
using namespace std;
class Seconds{
    int sec;
    public:
    //To Create an individual object, we will have to use a dummy or default constructor like: 'Seconds(){}'.
    Seconds(){}
    Seconds(int seconds){
        this->sec=seconds;
    }
    void display(){
        cout<<sec<<" Seconds"<<endl;
    }
};
class Minutes{
    int min;
    public:
    Minutes(){
        cout<<"Enter the time in minutes: ";
        cin>>min;
    }
    operator Seconds(){
        return (min*60);
    }
    void display(){
        cout<<min<<" Minutes";
    }
};
int main(){
    Minutes m;
    Seconds s=m;
    m.display();
    cout<<" = ";
    s.display();
    return 0;
}