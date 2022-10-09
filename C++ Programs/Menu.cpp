#include<iostream>
using namespace std;
int main()
{
    int i, j=0, num, value=0;
    repeat:
    cout<<"\nPress 1 for Odd/Even Program;\nPress 2 for Prime/Not Prime program;\nPress 3 for Factorial Finder program;\nPress 4 to Exit;\n\nEnter your option: ";
    cin>>value;
    switch(value){
        case 1:
        {
            cout<<"Enter the number: ";
            cin>>num;
            if (num%2==0){
                cout<<"The number "<<num<<" is an EVEN number."<<endl;
            }
            else{
                cout<<"The number "<<num<<" is an ODD number."<<endl;
            }
            break;
        }
        case 2:
        {
            cout<<"Enter the number: ";
            cin>>num;
            int t, flag=0;
            for (i=2;i<num;i++){
                if (num%i==0){
                    flag=1;
                    cout<<"The number "<<num<<" is not a Prime Number."<<endl;
                    break;
                }
            }
            if (flag==0){
                cout<<"The number "<<num<<" is a Prime number."<<endl;
            }
            break;
        }
        case 3:
        {
            cout<<"Enter the number to find its Factorial: ";
            cin>>num;
            int fact=1;
            for (i=1;i<=num;i++){
                fact=fact*i;
            }
            cout<<"The Factorial of the number "<<num<<" is: "<<fact<<endl;
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout<<"Enter Only The Given Values."<<endl;
            break;
        }
    }
    if (value==1||value==2||value==3){
        cout<<"Do you want to repeat the Program (Press '1' for 'Yes' and '0' for 'No'): ";
        cin>>j;
        if (j==1){
            goto repeat;
        }
        else{
            return 0;
        }
    }
}