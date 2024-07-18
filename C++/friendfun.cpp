///friend function:
#include<iostream>
using namespace std;
class Paras;
class Rohit{
    private:
    int r_money=500;
    private:
    friend int Abhi(Rohit,Paras);
};
class Paras{
    private:
    int p_money=2000;
    private:
    friend int Abhi(Rohit,Paras);
};

int Abhi(Rohit r,Paras p){
    int total;
    total=r.r_money+p.p_money;
    cout<<"Total="<<total<<endl;
}

int main(){
    Rohit rr;
    Paras pp;
    Abhi(rr,pp);
}