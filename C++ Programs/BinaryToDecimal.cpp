#include<iostream>
using namespace std;
int binarytoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n>0){
        int y = n%10;
        ans += x*y;
        x*=2;
        n /= 10;
    }
        return ans;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number "<<num<<" in the binary form is: "<<binarytoDecimal(num);
    return 0;
}