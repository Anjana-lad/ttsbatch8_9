//parameterized constructor : in this we will pass the parameter in the constructor.
#include<iostream>
using namespace std;
class Add_fun{
    private:
    int a,b,c;
    public:
    Add_fun(int n1,int n2){  //parameterized constructor.
      a=n1;
      b=n2;
    }
    int result(){
        c=a+b;
        cout<<"Total="<<c<<endl;
    }
};
int main(){
    Add_fun af(10,20);
    af.result();
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    Add_fun af2(a,b);
    af2.result();
}