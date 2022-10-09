#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms for the array: ";
    cin>>n;
    int i, a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}