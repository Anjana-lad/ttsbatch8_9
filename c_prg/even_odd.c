//find whether number is even or odd; if else
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
}