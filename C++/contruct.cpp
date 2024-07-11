//default constructor : there is no parameter pass to the constructor
#include<iostream>
using namespace std;
class Points{
    private:
    int singing,dance;
    public:
    Points(){
        cout<<"Enter singing :";
        cin>>singing;
        cout<<"Dance=";
        cin>>dance;
    } //  default constructor
    int show(){
        cout<<"Singing="<<singing<<"\n Dance="<<dance<<endl;
    }
};
int main(){
    Points p;
    p.show();
}