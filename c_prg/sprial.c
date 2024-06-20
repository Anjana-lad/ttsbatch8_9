/*
Algorithm for spiral pattern:
step 1: define 2d array of size x size;
step 2: step1:loop for left to right
        step2:loop for top to bottom
        step3:loop for right to left
        step4:loop for bottom to top-1
step 3:repeat step 2 for  size/2 times to fill inner square.

 1   2   3   4   5 
16  17  18  19   6
15  24  25  20   7
14  23  22  21   8
13  12  11  10   9

*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1;
    int end=size-1;

     for(row=0;row<=size/2;row++,end--){

     for(col=row;col<=end;col++){
        arr[row][col]=num++;
    }
     for(col=row+1;col<=end-1;col++){
        arr[col][end]=num++;
    }

     for(col=end;col>row;col--){
        arr[end][col]=num++;
    }
     for(col=end;col>row;col--){
        arr[col][row]=num++;
     }
    }
    //printing array
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d ",arr[row][col]);
        }
    }
}
