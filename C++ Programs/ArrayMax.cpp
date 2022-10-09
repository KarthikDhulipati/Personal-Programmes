#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of values to be stored by array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mx=-19999999;
    for (int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    cout<<"The maximium number in the array entered = "<<mx<<endl;
    return 0;
}