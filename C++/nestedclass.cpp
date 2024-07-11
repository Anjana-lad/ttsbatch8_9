//nested class 
#include<iostream>
using namespace std;
class A{
    public:
    class B{
        public:
        int show(){
           cout<<"I am in class B"<<endl;
        }
    }; 
    
    // int show(){
    //     cout<<"I am in class A"<<endl;
    // }
};

int main(){
    // A a;
    // a.show();
    A::B obj;
    obj.show();
}