#include<iostream>
#include<stdlib.h>
using namespace std;
class repeated{
    int n;
    int arr[50];
    public:
    void get(){
        
        cout<<"Enter the number of elements: ";
        cin>>n;
        
        cout<<"Enter the array: ";
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void display(){
        int count[n]={0};
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (arr[i]==arr[j]){
                    count[i]++;
                    if (count[i]<=1){
                        continue;
                    }
                    else{
                        arr[j]=arr[j+1];
                        n--;
                    }
                }
            }
        }
        cout<<endl;
        for (int i=0;i<n;i++){
            printf("%d appears %d times.\n", arr[i], count[i]);
        }
        cout<<endl;
    }
};
int main()
{
    system("cls");
    repeated a;
    a.get();
    a.display();
    return 0;
}