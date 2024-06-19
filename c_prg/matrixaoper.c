//matrix operation like addition ,subtraction,multiplication
#include<stdio.h>
int main(){
    int r,c,row,col,arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);
   
    printf("Enter elements of array1");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter elements of array2");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n printing of array1");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr1[row][col]);
        }
    }

    printf("\n Array2");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr2[row][col]);
        }
    }
//     //for addition:
//     for(row=0;row<r;row++){
   
//         for(col=0;col<c;col++){
//             sum[row][col]=arr1[row][col]+arr2[row][col];
//         }
//     }
//     printf("\n Addition");
//     for(row=0;row<r;row++){
//              printf("\n");
//         for(col=0;col<c;col++){
//            printf("%d  ",sum[row][col]);
//         }
//     }
// //subtraction:
//     for(row=0;row<r;row++){
//         for(col=0;col<c;col++){
//             sub[row][col]=arr1[row][col]-arr2[row][col];
//         }
//     }
//     printf("\n subtraction");
//     for(row=0;row<r;row++){
//              printf("\n");
//         for(col=0;col<c;col++){
//            printf("%d  ",sum[row][col]);
//         }
//     }
//multiplication code:    
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\n Multiplication of arrays:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
        }
    }
}