#include<iostream>
using namespace std;
class Minutes{
    int min;
    public:
    Minutes(){
        cout<<"Enter the time in minutes: ";
        cin>>min;
    }
    void display(){
        cout<<min<<" Minutes";
    }
    int getValue(){
        return min;
    }
};
class Seconds{
    int sec;
    public:
    //To Create an individual object, we will have to use a dummy or default constructor like: 'Seconds(){}'.
    Seconds(){}
    Seconds(Minutes m){ //This Constructor is used for converting Minutes to seconds.
        this->sec=m.getValue()*60;
    }
    void display(){
        cout<<sec<<" Seconds"<<endl;
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