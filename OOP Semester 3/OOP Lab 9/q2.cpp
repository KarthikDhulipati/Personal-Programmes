#include<iostream>
#include<cstdlib>
using namespace std;
template<typename T1, typename T2>
void data(T1 &a1,T2 &a2){
    cout<<"a1 = "<<a1<<endl;
    cout<<"a2 = "<<a2<<endl;
}
int main(){
    int a;
    char x;
    cout<<"Enter the integer and Character Respectively: ";
    cin>>a>>x;
    data<char,int>(x, a);
    data<int,char>(a, x);
    return 0;
}