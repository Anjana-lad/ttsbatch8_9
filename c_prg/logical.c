//logical operator AND(&&), OR(||),NOT(!);
// c1  c2  and   or
// 0   0   0     0
// 0   1   0     1
// 1   0   0     1
// 1   1   1     1
//  not ! is always working with one condition that is it show the opposite value of it i.e 0==1
//  1==0;

#include<stdio.h>
int main(){
    int num1,num2, res;
    printf("Enter num1,num2:");
    scanf("%d %d",&num1,&num2);
    res=(num1 > num2) && (num1>0);
    printf("AND =%d",res);
      res=(num1 >= num2) || (num2>0);
    printf("\n OR =%d",res);
    res= !num2;
    printf("\n NOT =%d",res);

}