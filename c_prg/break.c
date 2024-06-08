//control statements in c program:
//1. break;
//2. continue;
//3. goto statement;
//example of break ;
#include<stdio.h>
int main(){
    int row=1,num;
    printf("Enter number where to stop:");
    scanf("%d",&num);
    do{
        if(row==num){
            break;
        }
        else{
            printf("%d \t",row);
        }
     row++;
    }while(row<=20);  
}