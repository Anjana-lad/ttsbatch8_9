//pointer with arrays
#include<stdio.h>
int main(){
    int arr[5]={74,96,52,14,30};
    int *ptr,*p1;
    ptr=&arr[0];  //referencing 
    p1=&arr[4];
    printf("\n address at value=%d ptr=%d",*ptr,ptr);
    printf("\n  address atvalue=%d  p1=%d",*p1,p1);

     ptr++;
     printf("\n address at value=%d ptr=%d",*ptr,ptr);
     ptr--;
     printf("\n address at value=%d ptr=%d",*ptr,ptr);
     ptr= p1 - 1;
     printf("\n address at value=%d ptr=%d",*ptr,ptr);
  int k=*ptr+*p1;
  printf("\n Result=%d",k);

}