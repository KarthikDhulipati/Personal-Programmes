#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
class Point{
    float x, y;
    public:
    void get(){
        cout<<"Enter the x and y coordinates respectively: ";
        cin>>x>>y;
    }
    friend float distance(Point x, Point y);
};
float distance (Point p1, Point p2){
    float x, y, d;
    x=p1.x-p2.x;
    y=p1.y-p2.y;
    d=sqrt((x*x)+(y*y));
    return d;
}
int main()
{
    system("cls");
    Point p1, p2;
    float d;
    p1.get();
    p2.get();
    d= distance(p1, p2);
    cout<<"The distance between the two points is: "<<d<<endl;
    return 0;
}