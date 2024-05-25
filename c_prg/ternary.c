//ternary operator (expression )?true :false
//(9>5)?1:0
#include<stdio.h>
int main(){
    int num1,num2;
        printf("Enter num1,num2:");
        scanf("%d %d",&num1,&num2);
        (num1>num2)?printf("Num1 is greater."):printf("num2 is greater");
}