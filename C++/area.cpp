//program to calculate area of circle,rectangle and triangle using switch case and function
#include<iostream>
#define pi 3.14
using namespace std;
int circle(int radius){
    cout<<"Area of circle="<<pi*radius*radius<<endl;
}
int rectangle(int l ,int w){
    cout<<"Area of rectangle="<<l*w<<endl;
}
int triangle(int b,int h){
    cout<<"Area of triangle="<<(b*h)/2<<endl;
}
int main(){
    int length,choice,width,radius,height,breadth;
    cout<<"1.Circle"<<endl<<"2.Rectangle"<<endl<<"3.Triangle"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    switch(choice){

        case 1 :
         cout<<"Enter radius:";
         cin>>radius;
         circle(radius);
         break;
        case 2: 
         cout<<"Enter length and width:";
         cin>>length>>width;
         rectangle(length,width);
         break;
         case 3:
         cout<<"Enter height and breadth:";
         cin>>height>>breadth;
         triangle(height,breadth);
         break;
         default:
         cout<<"Invalid choice..."<<endl;
         break; 
    }
}

