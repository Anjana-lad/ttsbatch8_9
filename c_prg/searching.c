//searching an element from and array;
#include<stdio.h>
int search(int arr[],int size,int element){
    int i;
    for(i=0;i<=size;i++){
        if(arr[i]==element){
            return i;
        }
    }
      return -1;
}
int main(){
    int arr[7]={78,25,63,42,92,15,30};
    int position,element;
    printf("Enter element to search:");
    scanf("%d",&element);
    position=search(arr,7,element);
   if(position==-1){
    printf("element not found");
   }
   else{
    printf("position =%d",position);
   }
}