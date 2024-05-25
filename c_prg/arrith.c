//operators in c program arithmetic operator => +,-,/,*,%,++,--
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter num1 nd num2:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n addition=%d",res);
    res=num1-num2;
    printf("\n subtraction=%d",res);
    res=num1*num2;
    printf("\n multiplication=%d",res);
    res=num1/num2;
    printf("\n division=%d",res);
    res=num1%num2;
    printf("\n modulo=%d",res);
    ++num1;
    printf("\n increment =%d",num1);
    --num2;
    printf("\n Decrement=%d",num2);

}
// pre and post  
// pre=> ++num1;  --num1;
// post-> num1++;  num1--;
