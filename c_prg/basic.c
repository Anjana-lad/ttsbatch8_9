//formatted function in c
//1.printf() :=output function 
//2.  scanf() := input function 
//
 //format specifier
//  int = %d 
//  char =%c 
//  float= %f 
//  double =%lf 
//  pointer= %p 

//Escape sequence
//1.new line =\n
//2. space =\t

// working with printf() and scanf() function
#include<stdio.h>
int main(){
    int num;
    char ch;
    float f;
    printf("Enter character:");
    scanf("%c",&ch);
     
    printf("Enter number:");
    scanf("%d",&num);

    printf("Enter any decimal number:");
    scanf("%f",&f);

    printf("\n Number is:%d",num);
    printf("\n Charater is=%c",ch);
    printf("\n Decimal value=%f",f);
}