//sorting array 
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int row;
    cout<<"Enter elements:";
    for(row=0;row<5;row++){
        cin>>arr[row];
    }
    cout<<"Printing array:"<<endl;
    for(row=0;row<5;row++){
        cout<<arr[row] <<"\t";
    }
    cout<<endl;
    //sorting array:
    for(row=0;row<5;row++){
        for(int col=0;col<5;col++){
            if(arr[row]<arr[col]){
                int temp=arr[col];
                arr[col]=arr[row];
                arr[row]=temp;
            }
        }
    }
    for(row=0;row<5;row++){
        cout<<arr[row]<<"\t";
    }

}