//no argument with return
#include<stdio.h>
int multiply(){
    int a,b,res;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    res=a*b;
    return res;
}
int main(){
    printf("Multiplying 2 numbers:=%d",multiply());
}