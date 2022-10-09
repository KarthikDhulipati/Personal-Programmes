#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<"The Summation of the numbers till "<<n<<" is "<<sum<<endl;
    return 0;
}