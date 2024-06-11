//with argument no return;
#include<stdio.h>
void sub(int,int);  //function declaration;
int main(){
    int x,y;
    printf("Enter numbers:");
    scanf("%d %d",&x,&y);
    sub(x,y);  //function call  with actual parameter  x,y
 }
void sub(int a, int b){   //function defination; //with formal parameter a,b
    int res=a-b;
    printf("Subtraction =%d",res);
}