#include<iostream>
#include<cstdlib>
using namespace std;
class array{
    int arr[5];
    public:
    friend ostream& operator << (ostream &out, const array &b);
    friend istream& operator >> (istream &in, array &b);
};
istream& operator >> (istream &in, array&c){
    for (int i=0;i<5;i++){
        in>>c.arr[i];
    }
    return in;
}
ostream& operator << (ostream &out, const array &c){
    for (int i=0;i<5;i++){
        out<<c.arr[i]<<" ";
    }
    return out;
}
int main(){
    array a;
    cout<<"Enter the values for the array: "<<endl;
    cin>>a;
    cout<<a;
    return 0;
}
