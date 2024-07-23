// function overriding: 
#include<iostream>
using namespace std;
class Base{
    public:
virtual int show(){
        cout<<"This is base class"<<endl;
    }
};
class Child :public Base{
    public:
    int show(){
        cout<<"This is child class"<<endl;
    }
};
int main(){
    Child ch;
    ch.show();
    Base *b;
    b=&ch;
    b->show();
   ch.Base::show();

}