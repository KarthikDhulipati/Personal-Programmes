#include<fstream>
#include<iostream>
using namespace std;
int main(){
    fstream fin;
    int count=0;
    char ch;
    fin.open("C:/Users/KIIT/Desktop/Filename.txt");
    while (!fin.eof()){
        fin.get(ch);
        cout<<ch;
        count++;
        //We can calculate the number of characters or the count of any character in the file.
    }
    cout<<"Count = "<<count<<endl;
    fin.close();
    return 0;
}