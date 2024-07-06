//scope resolution operator(::) => to access the value of global variable in the main function.
#include<iostream>
using namespace std;
int p=30;  //global variable 
int main(){
    int p=20;
    int q=10;
    cout<<"P+Q="<<p+q<<endl;  //without using :: operator;
    cout<<"::p+p+q="<<::p+p+q<<endl;  //with using :: operator with p;

}