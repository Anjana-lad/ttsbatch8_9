//constructor overloading : program having more then one constructor. 
#include<iostream>
using namespace std;

class rectangle{
 public:
 int length,width;
 public:
 rectangle();
 rectangle(int,int);
 int area(){
    return length*width;
 }
} ;

rectangle :: rectangle(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:=";
    cin>>width;
}
rectangle :: rectangle(int l,int w){
    length=l;
    width=w;
}

int main(){
    rectangle rect;
    rectangle rect2(9,4);
    cout<<"Area of rectangle with default constructor="<<rect.area()<<endl;
    cout<<"Area of rectangle with parameterized constructor="<<rect2.area()<<endl;    
}