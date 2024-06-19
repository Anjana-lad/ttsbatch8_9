// 2-Dimension array : datatype array_name[row][col];
#include<stdio.h>
int main(){
    int row,col,arr[2][3]={{12,18,16},{74,63,52}};
    printf("printing 2-d array");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
        }
    }
}