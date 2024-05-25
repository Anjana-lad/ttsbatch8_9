//assignment operator: +=,-=,/=,*=,%=,=
#include<stdio.h>
int main(){
    int num1;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Num1=%d",num1);
    num1+=10;//num1=num1+10;
    printf("\n Adding 10=%d",num1);
    num1-=5;
    printf("\n Num1=%d",num1);
    num1*=3;
    printf("\n Num1=%d",num1);
    num1/=2;
    printf("\n Num1=%d",num1);


}