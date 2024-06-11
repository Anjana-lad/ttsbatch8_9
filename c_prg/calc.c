//calculator using user-defined function
#include<stdio.h>
int show(int a, char ch,int b,int res){
    printf("%d %c %d = %d",a,ch,b,res);
}
int sum(int a,int b){
    int res;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
    res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int  res;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
        res=a-b;
    show(a,'-',b,res);
}
int mul(int a, int b){
    int  res;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
        res=a*b;
    show(a,'*',b,res);
}
int div(int a,int b){
    int  res;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
        res=a/b;
    show(a,'/',b,res);
}
int main(){
    int choice;
    int x,y;
    printf("\n 1.Addition.");
    printf("\n 2.Subtraction.");
    printf("\n 3.Multiplication");
    printf("\n 4. Division");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        sum(x,y);
        break;
    case 2:
        sub(x,y);
        break;
    case 3:
        mul(x,y);
        break;
    case 4:
        div(x,y);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
}