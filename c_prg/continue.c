//continue statements:
#include<stdio.h>
int main(){
    int row=0,num;
    printf("Enter number which you want to skip:");
    scanf("%d",&num);
    while(row<20){
         row++;
         if(row==num){
           continue;
         }  
          printf("%d \t",row);
    }
}