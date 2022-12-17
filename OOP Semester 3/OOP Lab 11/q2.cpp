#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    system("cls");
    fstream cfile;
    ifstream pfile;
    char ch1, ch2;
    pfile.open("q1.txt", ios::out|ios::in);
    cfile.open("q2.txt", ios::out|ios::in);
    while (!pfile.eof()){
        pfile.get(ch1);
        cfile.put(ch1);
    }
    pfile.close();
    pfile.open("q1.txt");
    int flag=1;
    cfile.seekg(0);
    
    while (!pfile.eof() && !cfile.eof()){
        pfile.get(ch1);
        cfile.get(ch2);
        if (ch1==ch2){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if (flag==1)
    printf("Both the Texts in the different files is same.\n");
    else
    cout<<"The text is not same in both the files.\n";
    return 0;
}