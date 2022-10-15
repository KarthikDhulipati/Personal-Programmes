#include<iostream>
#include<cstdlib>
using namespace std;
class Test{
    static int count;
    public:
    void c(){
        count++;
    }
    void display(){
        cout<<"Number of objects in this program are: "<<count<<endl;
    }
};
int Test::count=0;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of objects to be created: ";
    cin>>n;
    Test ob[n];
    for (int i=0;i<n;i++){
        ob[i].c();
    }
    ob[n-1].display();
    return 0;
}