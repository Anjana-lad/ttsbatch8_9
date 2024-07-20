//diamond problem: it is the combination of multilevel and multiple inheritance.
#include<iostream>
using namespace std;
class A{
     public:
     int a;
     public:
     int geta(){
        cout<<"Enter a=";
        cin>>a;
     }
     int showa(){
        cout<<"A="<<a<<endl;
     }
};

class B  : virtual public A{
     public:
     int b;
     public:
     int getb(){
 
        cout<<"Enter b=";
        cin>>b;
     }
     int showb(){
     
        cout<<"B="<<b<<endl;
     }
};
class C : virtual public A{
        public:
     int c;
     public:
     int getc(){
    
        cout<<"Enter c=";
        cin>>c;
     }
     int showc(){
       
        cout<<"c="<<c<<endl;
     }
};
class D: public B,public C{
    public:
    int total;
    public:
    int getda(){
        geta();
        getb();
        getc();
         total=a+b+c;
    }
    int result(){
        showa(); 
    showb();
    showc();
       
        cout<<"Result="<<total<<endl;
    }
};


int main(){
    D d;
    d.getda();
    d.result();
}