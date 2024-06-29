//pointers of array
#include<stdio.h>
int main(){
    int arr[5]={74,75,26,12,35};
    int i,*ptr[5];
    
    for(i=0;i<5;i++){
      printf("\n Array elements:= %d \t",arr[i]);
    }

 
    printf("\n Address of array elements");
    for(i=0;i<5;i++){
       ptr[i]=&arr[i];    //address intilization
        printf("\n %d",ptr[i]);
    }

    printf(" \n %d  at and address=%d",arr[2],ptr[2]);

}