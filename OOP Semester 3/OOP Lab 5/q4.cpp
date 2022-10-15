#include<iostream>
#include<cstdlib>
using namespace std;
class time1{
    int hrs, min=0;
    public:
    time1(){
        cout<<"Enter the hours: ";
        cin>>hrs;
        cout<<"Enter the minutes: ";
        cin>>min;
        if (min>60)
        min=0;
    }
    time1(time1 t1, time1 t2){
        min=t1.min+t2.min;
        hrs=t1.hrs+t2.hrs;
        if (min/60!=0){
            hrs+=(min/60);
            min=min-60;
        }
        cout<<"Sum of time = "<<hrs<<":"<<min<<endl;
    }
};
int main(){
    system("cls");
    time1 t1;
    time1 t2;
    time1 t3(t1, t2);
    return 0;
}