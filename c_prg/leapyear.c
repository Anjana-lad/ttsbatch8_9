//leap year  using if_else
#include<stdio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    // year should be divisible by 4 and not divisible by 100 but should be divisible by 400
    if((year%4==0) && (year%100!=0) || (year%400==0)){
        printf("Is a leap year.");
    }
    else{
        printf("Not a leap year.");
    }
}