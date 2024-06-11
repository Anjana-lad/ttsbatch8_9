//no argument no return
#include<stdio.h>
void sum(){  //function defination
    int a,b,res;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("Result =%d",res);
}
int main(){
    sum();   //  function call
}
