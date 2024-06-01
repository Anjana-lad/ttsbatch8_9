//factorial 4!=4*3*2*1=24
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number");
    scanf("%d",&num);
    while(num>=1){
        fact=fact*num;
        num--;
    }
      printf("Factorial =%d",fact);
}