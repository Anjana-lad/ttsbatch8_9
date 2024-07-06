//palindrome number
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,rem;
    cout<<"Enter number:";
    cin>>num;
    int n=num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    while(num!=0);
cout<<"reverse ="<<rev<<endl;
if(n==rev){
    cout<<"number is palindrome.";

}
else{
    cout<<"Number is not palindrome.";
 }
}