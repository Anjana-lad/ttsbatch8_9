//inline function
#include<iostream>
using namespace std;
inline int cub_fun(int side){
    return side*side*side;
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Cube of given number="<<cub_fun(num);

}