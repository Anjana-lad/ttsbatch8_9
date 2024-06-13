//dynamic 1D array : taking value of array from user.
#include<stdio.h>
int main(){
    int i,arr[5];
    printf("Enter elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Printing array elements:\n");
    for(i=0;i<5;i++){
        printf("arr[%d]=%d\n ",i,arr[i]);
    }
}