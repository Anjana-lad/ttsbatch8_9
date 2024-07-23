//two string
#include<iostream>
using namespace std;
class overload{
    public:
    string str;
    public:
    overload(string st){
        str=st;
    }
    string operator +(overload &ov){
        string res=str+ov.str;
         return res;
    }  
};
int main(){
    overload ov1("hello");
    overload ov2("world");
   cout<<"Adding two string=== "<< ov1+ov2;
 
}