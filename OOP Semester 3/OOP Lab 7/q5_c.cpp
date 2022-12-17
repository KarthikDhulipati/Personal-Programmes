#include<iostream>
using namespace std;
class Inch{
    double inches;
    public:
    Inch(){}
    Inch(double inches){
        this->inches=inches;
    }
    void display(){
        cout<<inches<<" inches"<<endl;
    }
};
class Feet{
    double feet;
    public:
    Feet(){
        cout<<"Enter the distance in Feet: ";
        cin>>feet;
    }
    operator Inch(){
        return (feet*12);
    }
};
int main()
{
    Feet f;
    Inch i;
    i=f;
    i.display();
}