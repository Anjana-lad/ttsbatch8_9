//fibonacci series: 0,1,1,2,3,5,8,13,21,.....
#include<stdio.h>
int main(){
    int num,n1=0,n2=1,count,temp=0;
    printf("Enter number:");
    scanf("%d",&num);
    printf("%d,%d,",n1,n2);
    count=2;
    while(count<=num){
        temp=n1+n2;
        n1=n2;
        n2=temp;
           printf("%d,",temp);
           count++;
    }
}