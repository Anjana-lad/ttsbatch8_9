//recursion : function calling itself.
#include<stdio.h>
int sum(int n){
    
    if(n>0){
        n=n+sum(n-1);
        return n;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Addition=%d",sum(num));
}