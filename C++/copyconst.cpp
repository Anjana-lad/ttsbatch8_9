//copy constructor : creates same copy of already existing constructor in the program.
//syntax =>
// class_name( const classname &object_name);

#include<iostream>
using namespace std;
class Values{
    public:
    int num1,num2;
    public:
    Values(int a,int b){  // parameterized constructor
        num1=a;
        num2=b;
    }
    Values (const Values &obj){  // copy constructor
        num1=obj.num1;
        num2=obj.num2;
    }
    int show(){
        cout<<"Num1="<<num1<<"\n num2="<<num2<<endl;
    }
};
int main(){
  Values v1(40,50);   //object for parameterized constructor
  Values v2=v1;  // object for copy constructor
  v2.show();  
}