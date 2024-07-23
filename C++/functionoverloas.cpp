//function overloading := means that function names are same but their parameter are different.in this we can also have different data-type but number of parameter are same.

#include<iostream>
using namespace std;
 int add_fun(int a,int b){
    cout<<"Addition of 2 integer values="<<a+b<<endl;
 }
 int add_fun(int a, int b,int c){
    cout<<"Addition of 3 integer values="<<a+b+c<<endl;
 }
 int add_fun(double a, double b){
    cout<<"Addition of 2 double values="<<a+b<<endl;
 }
int main(){
    add_fun(10,20);
    add_fun(10,52.8,10.2);
    add_fun(5,7);
}
