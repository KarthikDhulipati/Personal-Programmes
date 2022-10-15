#include<iostream>
#include<cstdlib>
using namespace std;
class A{
    protected:
    A(){
        cout<<"In A"<<endl;
    }
    ~A(){
        cout<<"Destructor A\n";
    }
};
class B: virtual protected A{
    protected:
    B(){
        cout<<"In B"<<endl;
    }
    ~B(){
        cout<<"Destructor B\n";
    }
};
class C: virtual protected A{
    protected:
    C(){
        cout<<"In C"<<endl;
    }
    ~C(){
        cout<<"Destructor C\n";
    }
};
class D: protected B, protected C{
public:
    D(){
        cout<<"In D"<<endl;
    }
    ~D(){
        cout<<"Destructor D\n";
    }
};
int main(){
    D d1;
    return 0;
}