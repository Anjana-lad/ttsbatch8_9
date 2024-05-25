//bitwise operator: &,|,^,~ >>,<<
//~num1:= -(num1+1);
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter num1,num2:");
    scanf("%d %d",&num1,&num2);
    res=num1 & num2;
    printf("\n Bitwise AND=%d",res);
    res=num1 | num2;
    printf("\n Bitwise or=%d",res);
     res=num1 ^ num2;
    printf("\n Bitwise Xor=%d",res);
     res=~num1;
    printf("\n Bitwise compliment=%d",res);


}