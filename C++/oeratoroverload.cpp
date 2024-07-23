// operator overloading := means without changing the meaning of the operator  we can use it in different way.
 //program to overload > operator:
 //syntax:  return_type operator (operator symbol)(classname &objectname)
#include<iostream>
using namespace std;
class overload{
    public:
    int num;
    public:
    overload(int n){
        num=n;
    }
    int operator <(overload &ov){
        if(ov.num<num){
          cout<<"Number"<<num;
        }
        else{
            return 0;
        }
    }
};
int main(){
    overload ov1(50);
    overload ov2(70);
    ov1<ov2;
 
}