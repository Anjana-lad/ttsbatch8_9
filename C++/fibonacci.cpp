//fibonacci series := 0,1,1,2,3,5,8,13,21,54,.....
#include<iostream>
using namespace std;
int main(){
    int num1=0,num2=1;
    int num,count,temp=0;
    cout<<"Enter number:";
    cin>>num;
    cout<<num1<<","<<num2;
    count=2;
    while(count<=num){
        temp=num1+num2;
        num1=num2;
        num2=temp;
      count++;

       cout<<","<<temp;
    }
  
}