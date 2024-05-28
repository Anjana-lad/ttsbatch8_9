//if else statement :  able to vote or not.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Able to vote.");
    }
    else{
        printf("Not able to vote.");
    }
}