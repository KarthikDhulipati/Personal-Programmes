#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int arr[3];
    try{
        for (int i=0;i<5;i++){
            if (i<3){
                printf("Enter the %dth index value: ", i);
                scanf("%d", &arr[i]);
            }
            else
            throw(i);
        }
    }
    catch(int i){
        cout<<"The value of i is out of bounds.";
    }
}