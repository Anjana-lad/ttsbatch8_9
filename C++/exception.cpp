#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    try{
        if(age>=18){
            cout<<"Allow to vote"<<endl;
        }
        else{
            throw(age);
        }
    }   
    catch(int a){
        cout<<"Your age is "<<age<<"which is not allowed"<<endl;
    }
}