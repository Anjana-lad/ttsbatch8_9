//multiple inheritance:=> in this we have two base class and their one child class.
#include<iostream>
using namespace std;
class Mom{
   protected:
    int m_money;
    public:
    Mom(){
        cout<<"Enter m_money:";
        cin>>m_money;
    }
    int show_m(){
        cout<<"Mom money="<<m_money<<endl;
    }
};
class Dad{
protected:
        int d_money;
    public:
    Dad(){
        cout<<"Enter d_money:";
        cin>>d_money;
    }
    int show_d(){
        cout<<"Dad money="<<d_money<<endl;
    }
};
class child:public Mom,public Dad{
    public:
    int total_money;
    int total(){
        show_m();
        show_d();
    total_money=m_money+d_money;
    cout<<"Total Money="<<total_money<<endl;
    }
};
int main(){
    child ch;
    ch.total();
}