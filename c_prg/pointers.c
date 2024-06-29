//pointers
#include<stdio.h>
int main(){
    int i=10;
    int *ptr; //pointer declaration
     ptr=&i;  // pointer initilization
     printf("\n Value of i=%d",i);
     printf("\n Address of I=%d",ptr);
     printf("\n value at pointer=%d",*ptr);

}