#include<iostream>
#include<string>
#include<cstdlib>
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
        cout<<"Enter the Name of the Book: ";
        cin>>name;
        cout<<"Enter the Name of the Author of the Book: ";
        cin>>author;
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
    book b1;
    b1.get();
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    cout<<endl;
    b1.display();
    return 0;
}