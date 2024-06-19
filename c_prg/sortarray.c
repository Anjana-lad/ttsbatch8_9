//sorting array elements in ascending or descending order.
#include<stdio.h>
int main(){
    int arr[5],i,j,temp;
    printf("Enter array elemets:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Printing array elements:");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
    //for sorting array elements;
printf("\n Array Ascending:");
    for(i=0;i<5;i++){
        for(j=0;j<=5;j++){
            if(arr[i]< arr[j]){  //
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]); 
    }
}