// *****
//  ****
//   ***
//    ** 
//     *

#include<iostream>
using namespace std;
int main(){
    int row,col,space;
    for(row=5;row>=1;row--){
        for(space=5-row;space>=5-row;space--){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}