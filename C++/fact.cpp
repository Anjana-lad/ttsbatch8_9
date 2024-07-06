//factorial using loop.
 #include<iostream>
 using namespace std;
 int main(){
    int num;
    int fact = 1;
   
    cout<<"Enter the number.";
    cin>>num;
    while(num!=0){
        fact=fact*num;
     num--;
    }
    cout<<"Factorial="<<fact<<endl;

 }

//  for(i=1;i<=num;i++){
//     fact=fact*i;

//  }