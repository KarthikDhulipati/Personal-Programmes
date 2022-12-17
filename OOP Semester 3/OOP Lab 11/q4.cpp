#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main(){
    ifstream in("q1.txt");
    char word[20],line[100],ch;
    int count_word=0,count_line=0,count_char=0;

    while(!in.eof()){
        in>>word;
        count_word++;
    }


    in.seekg(0,ios::beg);
    while(!in.eof()){
        in.getline(line,100);
        count_line++;
    }


    in.seekg(0,ios::beg);
    while(!in.eof()){
        in>>ch;
        count_char++;
    }

    in.close();
    cout<<"Number of words in file : "<<count_word<<endl;
    cout<<"Number of Lines in file : "<<count_line<<endl;
    cout<<"Number of Characters in file : "<<count_char<<endl;
    return 0;
}
