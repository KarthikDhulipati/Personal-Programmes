#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    string name1={"KIIT University"}, name2={"KIIT"};
    int n=name1.length();   //Usage of length() allows to get the length of the string.
    printf("Length of string = %d\n", n);

    bool e=name1.empty();   //empty() returns 1 if the string is empty.
    if (e){
        printf("The string is empty.\n");
    }
    else{
        printf("The string is not empty.\n");
    }
    char x=name1.at(3);
    cout<<"The alphabet is : "<<x<<endl;

    char find;
    cout<<"Enter the alphabet to find its first occurance in the string: ";
    cin>>find;
    int a=name1.find(find); //The find() helps in finding the first occurance position of any letter in the given string and if the alphabet is not present, it returns -1 
    cout<<"The first occurance position of "<<find<<" is "<<a<<endl;

    cout<<"KIIT is a Deemed to be "<<name1.substr(5, 15)<<endl;//Usage of substr() to get the word 'University' from the string.

    //By using resize(), we can adjust the string length.
    name1.resize(4);
    cout<<"I study in "<<name1<<"."<<endl;

    bool check=name1.compare(name2); //compare() returns 0 if the two strings are identical, else returns 1 if the strings are not equal to each other.
    if (check==0){
        cout<<"The strings name1 and name2 are identical "<<endl;
    }
    else{
        cout<<"The strings name1 and name2 are not identical "<<endl;
    }

    name1.clear();//clear() clears all the contents of the string.
    cout<<"The string has these values stored: "<<name1<<endl;

    return 0;
}