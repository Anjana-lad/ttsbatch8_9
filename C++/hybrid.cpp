//hybrid inheritance :- combination of more then two inheritance then it is called hybrid inheritance.
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    int getp(){
        cout<<"Enter P=";
        cin>>p; 
    }
};
class Q:public P{
    public:
    int q;
    public:
    int getq(){
        getp();
        cout<<"Enter Q=";
        cin>>q;
    }
};
class R{
       public:
    int r;
    public:
    int getr(){
        cout<<"Enter R=";
        cin>>r;
    }
};
class S :public Q,public R{
    public:
    int s;
    public:
    int gets(){
        getq();
        getr();
        cout<<"Enter s:";
        cin>>s;
    }
    int total(){
        int tot=p+q+r+s;
        cout<<"Total="<<tot<<endl;
    }
};
int main(){
    S ss;
    ss.gets();
    ss.total();
}