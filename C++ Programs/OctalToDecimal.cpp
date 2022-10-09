#include<iostream>
using namespace std;
int octaltoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n=n/10;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the number in Octal Form: ";
    cin>>num;
    cout<<"The number in Octal Form is: "<<octaltoDecimal(num);
    return 0;
}