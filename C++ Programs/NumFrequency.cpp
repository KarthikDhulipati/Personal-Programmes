#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the 1-D array: "<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int f[n];
    for (int i=0;i<n;i++){
        f[i]=0;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i]==a[j]){
                f[i]++;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" occurs "<<f[i]<<" times."<<endl;
    }
}