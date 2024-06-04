//    1
//   12
//  123
// 1234
//12345
#include<stdio.h>
int main(){
    int space,row,col;
    for(row=1;row<=5;row++){
        for(space=4;space>=row;space--){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
           printf("\n");
    }
 
}