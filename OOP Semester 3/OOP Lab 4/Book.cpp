#include<iostream>
#include<string>
#include<cstdlib>
#include<ios>
#include<limits>
using namespace std;
class book{
    int isbn;
    float price;
    string name, author;
    public:
    void get()
    {
        cout<<"Enter the ISBN No. of the Book: ";
        cin>>isbn; 
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter the Name of the Book: ";
        getline(cin, name);
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter the Name of the Author of the Book: ";
        getline(cin, author);
        cout<<"Enter the price of the Book: ";
        cin>>price;
    }
    void display(){
        cout<<"Name of Book: "<<name<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN No.: "<<isbn<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of Books: ";
    cin>>n;
    book b[n];
    for (int i=0;i<n;i++){
        b[i].get();
    }
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        b[i].display();
    }
}