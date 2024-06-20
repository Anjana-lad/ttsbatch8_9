//multi-dimension array 
//syntax:= datatype array[table][row][col];
#include<stdio.h>
int main(){
    int arr[3][3][3]={
                {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                    },
                    {
                    {10,11,13},
                    {14,15,16},
                     {17,18,19}             
                    },
                    {
                        {21,22,23},
                        {15,19,18},
                        {25,29,24}
                    }
    };
    int row,col,tab;
    for(tab=0;tab<3;tab++){
          printf("\n table =%d ",tab);
      for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr[tab][row][col]);
        }
       }
     }
}
