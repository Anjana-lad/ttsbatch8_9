//hierarchical inheritance.
#include<iostream>
using namespace std;
class Shape{
 public: 
    string name;
    public:
    int getname(){
        cout<<"Enter name:";
        cin>>name;
    }
    int show(){
        cout<<"Name="<<name<<endl;
    }
    
};
class rectangle:public Shape{
    public:
    int length,breadth,area;
    public:
    int  getdata(){
        getname();
        cout<<"Enter length and breadth:";
        cin>>length>>breadth;
    }
    int Rct_Area(){
       show();
        area=2*(length+breadth);
        cout<<"Area of rectangle="<<area<<endl;
    }
};
class Square :public Shape{
    public:
    int side,area;
    public:
    int getside(){
        getname();
        cout<<"Enter side:";
        cin>>side;
    }
    int sq_area(){
        show();
        area=side*side;
        cout<<"Area of square="<<area<<endl;
    }
};
int main(){
    rectangle rect;
    rect.getdata();
    rect.Rct_Area();
    Square sq;
    sq.getside();
    sq.sq_area();
}