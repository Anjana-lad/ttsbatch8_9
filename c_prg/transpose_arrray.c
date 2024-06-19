//transpose of array;
#include<stdio.h>
int main(){
    int r,c,row,col,arr[20][20];
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);

    printf("Enter elements of array1");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\narray1");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr[row][col]);
        }
    }
//transpose of array
printf("\n transpose of array");
    for(col=0;col<c;col++){
        printf("\n"); 
        for(row=0;row<r;row++){
            printf("%d ",arr[row][col]);
        }
    }
}