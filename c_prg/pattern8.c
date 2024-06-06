//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}