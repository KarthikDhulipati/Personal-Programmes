#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class alphabet{
    string n;
    public:
    void get(){
        cout<<"Enter the String Value: ";
        getline(cin, n);
    }
    void display(){
        string flag;
        for (int i=0;i<n.length();i++){
            if (n[i]>='a' && n[i]<='z' || n[i]>='A' && n[i]<='Z'){
                flag=flag+n[i];
            }
            else{
                continue;
            }
        }
        n=flag;
        cout<<"The String is: "<<n<<endl;
    }
};
int main()
{
    system("cls");
    alphabet a;
    a.get();
    a.display();
    return 0;
}