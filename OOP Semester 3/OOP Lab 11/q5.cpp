#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream file;
    ofstream ofile;
    ofile.open("q5.txt");
    file.open("q1.txt", ios::in|ios::out);
    char ch1='n', ch2;
    
    while (!file.eof()){
        file.get(ch1);
        if (ch1>=65 && ch1<=90){
            ch1+=32;
            // file.put(ch1);
            cout<<ch1;
        }
        else if (ch1>=97 && ch1<=122){
            ch1-=32;
            // file.put(ch1);
            cout<<ch1;
        }
        else{
            if (ch1==' '){
                cout<<" ";
            }
            else if (ch1=='='){
                cout<<"=";
            }
            else if (ch1=='\n'){
                cout<<"\n";
            }
            else if (ch1=='-'){
                cout<<"-";
            }
            else if (ch1>=48 && ch1<=57){
                cout<<ch1;
            }
            // int x;
            // cout<<"tellg = "<<file.tellg()<<endl;
            // cout<<"tellp = "<<file.tellp()<<endl;
            // cout<<endl;
            // file.seekp(file.tellp()+x, ios::cur);
        }
        ofile.put(ch1);
    }
    return 0;
}