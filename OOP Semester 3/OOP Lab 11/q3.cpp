#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    char ch;
    ifstream in("Q1.txt");
    in.seekg(0, ios::end);
    int currP = (int)in.tellg();
    cout << "Position of Get Pointer inside the file : " << currP << endl;

    currP -= 2;
    while (currP >= 0)
    {
        in.seekg(currP, ios::beg);
        in.get(ch);
        cout << ch;
        currP--;
    }
    in.close();

    return 0;
}
