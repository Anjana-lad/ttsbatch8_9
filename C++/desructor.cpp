//destructor 
#include<iostream>
using namespace std;
class Add_f{
    public:
    int n1,n2,res;
    public:
    Add_f(int a,int b){  //constructor
        n1=a;
        n2=b;
    }
    int result(){
        res=n1+n2;
        cout<<"Total="<<res<<endl;
    }
    ~Add_f(){  //destructor
        cout<<"Called destructor"<<endl;
    }
};

int main(){
    Add_f af(74,20);
    af.result();
    cout<<"Calling destructor"<<endl;    
}
