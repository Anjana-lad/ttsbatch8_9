//array is a derived data-type.
//static 1D array.
#include<stdio.h>
int main(){
    int i, arr[5]={11,22,33,44,55};// declaration with intialization
    int n;
    for(i=0;i<5;i++){
       printf("arr[%d] = %d \n",i,arr[i]);
    }
    printf("Enter number to access:");
    scanf("%d",&n);
    printf("Accessing  element at position at n index:arr[%d]=%d",n,arr[n]);    
}