#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;
class student{
    int age, roll;
    char name[30], section[7];
    public:
    void getdata(){
        cout<<"Enter the Roll Number of the student: ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter the name of student: ";
        cin.getline(name, 30);
        cout<<"Enter the section of the student: ";
        cin.getline(section, 7);
        cout<<"Enter the student's age: ";
        cin>>age;
    }
    void display(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Roll Number = "<<roll<<endl;
        cout<<"Section = "<<section<<endl;
    }
};
int main(){
    student s[3];
    fstream file;
    file.open("practice.txt", ios::out);
    cout<<"Enter the details of three students: "<<endl;
    for (int i=0;i<3;i++){
        s[i].getdata();
        file.write((char*)&s[i], sizeof(s[i]));
    }
    file.close();
    file.open("practice.txt", ios::in);
    for (int i=0;i<3;i++){
        file.read((char*)&s[i], sizeof(s[i]));
        s[i].display();
    }
    file.close();
}