#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class swap1{
    public:
    int x, y;
    void get(){
        cout<<"Enter the value of x and y respectivly: ";
        cin>>x>>y;
    }
    void display(){
        cout<<endl<<"Values of x and y before swapping: "<<endl;
        cout<<"x = "<<x<<setw(8)<<"y = "<<y<<endl; 
    }
    void call_reference(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void call_pointer(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    void call_value(int a, int b){
        int temp=a;
        a=b;
        b=temp;
        x=a;
        y=b;
    }
};
int main(){
    system("cls");
    swap1 s;
    s.get();
    s.display();
    int check;
    cout<<endl<<"Press '1' to swap by Call by Reference Function: "<<endl<<"Press '2' to swap by Call by Pointer Function: "<<endl<<"Press '3' to swap by Call by Value Function: "<<endl<<endl;
    repeat:
    cout<<"Enter the number: ";
    cin>>check;
    if (check==1){
        s.call_reference(s.x, s.y);
    }
    else if (check==2){
        s.call_pointer(&s.x, &s.y);
    }
    else if (check==3){
        s.call_value(s.x, s.y);
    }
    else{
        cout<<"You have not entered the number correctly. Please try again."<<endl;
        goto repeat;
    }
    int repeat;
    cout<<"x = "<<s.x<<setw(8)<<"y = "<<s.y<<endl;
    if (check==1||check==2||check==3){
        cout<<"Would you like to repeat the program?"<<endl<<"Enter '1' for YES and '0' for NO: ";
        cin>>repeat;
        if (repeat==1){
            goto repeat; 
        }
    }
    return 0;
}