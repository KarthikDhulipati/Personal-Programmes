#include<iostream>
#include<string>
using namespace std;
class str{
    string *str1;
    int length;
    public:
    str(){
        str1=new string;
        cout<<"Enter the string: ";
        getline(cin, *str1);
        cout<<*str1<<endl;
        length=0;
    }
    void concatination(str s2){
        string fullstring;
        fullstring=*str1+*s2.str1;
        cout<<"FullString = "<<fullstring<<endl;
        length=fullstring.length();
        cout<<"Length = "<<length<<endl;
    }
};
int main()
{
    str s1, s2;
    s1.concatination(s2);
    return 0;
}