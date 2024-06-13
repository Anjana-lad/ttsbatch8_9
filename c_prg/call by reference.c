//call by reference:-
#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;   
    *a=*b;
    *b=temp;
    printf("\n After swapping the value of A=%d and b=%d",*a,* b);
}
int main(){
    int a,b;
    printf("Enter value of A and B");
    scanf("%d %d",&a,&b);
    printf("\n Before calling function: a=%d \t b=%d", a,b);
    swap(&a,&b);
    printf("\n After calling function: a=%d \t b=%d",a,b);
}