// multiple inheritance has and ambiguity problem when we have same function name in both the parent class or child class.
#include<iostream>
using namespace std;
class A{
public:
int show(){
    cout<<"Class A"<<endl;
}
};
class B{
    public:
    int show(){
        cout<<"Class B"<<endl;
    }
};
class C:public A,public B{
    public:
    int show(){
    A::show();
    B::show();
        cout<<"Class C"<<endl;
    }
};

int main(){
    C c;
    c.show();
}