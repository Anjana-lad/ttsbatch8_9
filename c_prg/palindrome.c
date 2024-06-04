//palindrome number: 1221
#include<stdio.h>
int main(){
    int num,rem,rev=0,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("Reverse number:%d\n",rev);
    if(temp==rev){
        printf("Number is palindrome.");
    }
    else{
        printf("Number is not palindrome.");
    }
}