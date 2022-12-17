#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    system("cls");
    string name, branch, section, uni;
    int age;
    char ch;
    ofstream ofile;
    ofile.open("D:/PROGRAMS/SEMESTER 3 programs/Object Oriented Programming/OOP Lab 11/q1.txt");
    cout<<"Enter your name, age, branch, section and university: ";
    cin>>name>>age>>branch>>section>>uni;
    ofile<<"Name = "<<name<<endl;
    ofile<<"Section = "<<section<<endl;
    ofile<<"Age = "<<age<<endl;
    ofile<<"Branch = "<<branch<<endl;
    ofile<<"University = "<<uni<<endl;
    ofile.close();
    cout<<endl;
    ifstream ifile;
    ifile.open("D:/PROGRAMS/SEMESTER 3 programs/Object Oriented Programming/OOP Lab 11/q1.txt");
    while (!ifile.eof()){
        ifile.get(ch);
        cout<<ch;
    }
    ifile.close();
    return 0;
}