#include<iostream>
#include<cmath>
using namespace std;
int Prime(int n){
    int flag=0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
    return (flag);
}
int Armstrong(int n1){
    int originaln=n1, sum=0;
    while (n1>0){
        int num=n1%10;
        sum+=pow(num,3);
        n1=n1/10;
    }
    int flag=0;
    if (sum==originaln){
        flag=1;
        return (flag);
    }
    else{
        return (flag);
    }
}
int main()
{
    int num;
    cout<<"Enter the number to check if the number is a Prime Number or an Amstrong number or both: "<<endl;
    cin>>num;
    int p, as;
    p=Prime(num);
    as=Armstrong(num);
    if (p==1){
        cout<<"The number is a Prime number."<<endl;
    }
    else{
        cout<<"The number is not a Prime number."<<endl;
    }
    if (as==1){
        cout<<"The number is an Armstrong number."<<endl;
    }
    else{
        cout<<"The number is not an Armstrong number."<<endl;
    }
    return 0;
}