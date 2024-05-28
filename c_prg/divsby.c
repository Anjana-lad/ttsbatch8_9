//check whether number is divisible by 11 or not. if _else
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%11==0){
        printf("Number divisible by 11.");
    }
    else{
        printf("Number is not divisible by 11.");
    }
}