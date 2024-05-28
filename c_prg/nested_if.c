// nested if : if inside if 
#include<stdio.h>
int main(){
    int age;
    char ch;
    printf("Enter your choice: M : Male and F : Female:");
    scanf("%c",&ch);
    if(ch=='M'|| ch=='m'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>21){
            printf(" Male is Eligible for marriage.");
        }
        else{
            printf("Male is Not eligible for marriage.");
        }
    }
    else{
        printf("Enter age:");
        scanf("%d",&age);
        if(age>18){
            printf(" Female is Eligible for marriage.");
        }
        else{
            printf("Female is Not eligible for marriage.");
        }
    }
}