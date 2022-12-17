#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("C:/Users/KIIT/Desktop/Filename.txt");
    char arr[30]="KIIT University\nHello World";
    out<<arr<<endl;
    out.close();
    return 0;
}