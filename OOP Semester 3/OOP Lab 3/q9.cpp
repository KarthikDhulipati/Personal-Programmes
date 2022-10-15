#include<iostream>
#include<stdlib.h>
using namespace std;
class product{
    int num;
    public:
    int square(int x){
        return (x*x);
    }
    int cub(int y){
        return (y*y*y);
    }
    void get(){
        cout<<"Enter the number: ";
        cin>>num;
    }
    void display(){
        cout<<"Square of "<<num<<" = "<<square(num)<<endl;
        cout<<"Cube of "<<num<<" = "<<cub(num);
    }
};
int  main()
{
    system("cls");
    product a;
    a.get();
    a.display();
    return 0;
}