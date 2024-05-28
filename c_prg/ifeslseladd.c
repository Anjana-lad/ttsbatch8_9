// if else ladder :
//syntax:
// if(condition){
//     statements;
// }
// else if(condition){
//     st;
// }
// else if(condition){
//     st;
// }
// else{
//     statements;
// }

// check whether number is positive ,negative or zero;
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive.");
    }
    else if(num<0){
        printf("Number is negative.");
    }
    else{
        printf("Number is zero.");
    }

}