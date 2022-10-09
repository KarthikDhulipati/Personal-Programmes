#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ulimit, llimit;
    cout<<"Enter the lower limit: ";
    cin>>llimit;
    cout<<"Enter the upper limit: ";
    cin>>ulimit;
    int flag=0, i, j;
    if (ulimit>llimit){
        for (i=llimit;i<=ulimit;i++){
            for (j=2;j<=sqrt(i);j++){
                if (i%j==0){
                    flag=0;
                    break;
                }
                else{
                    flag=1;
                }
            }
            if (flag==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    else if (ulimit==llimit){
        cout<<"Since the upper limit is equal to the lower limit, there are no numbers left to segregate into prime or not prime."<<endl;
    }
    else{
        cout<<"The upper limit entered is smaller than the lower limit. Please enter appropriate values and try again."<<endl;
    }
    return 0;
}