//with argument with return
#include<stdio.h>
int div(int a,int b){
    int r=a/b;
    return r;
}
int main(){
    int num1,num2;
    printf("enter number:");
    scanf("%d %d",&num1,&num2);
   // int r=div(num1,num2);
    printf("division=%d",div(num1,num2));
}