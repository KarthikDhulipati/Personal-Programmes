#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int arr[10];
    printf("Enter the numbers: ");
    for (int i=0;i<10;i++)
    scanf("%d", &arr[i]);
    try{
        for (int i=0;i<10;i++){
            if (arr[i]<0)
            throw(arr[i]);
        }
        for (int i=0;i<10;i++)
        printf("%d", arr[i]);
    }
    catch(int i){
        cout<<"The array has a negative value: "<<i<<endl;
    }
}