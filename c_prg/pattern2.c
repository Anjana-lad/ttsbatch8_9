//1
//12
//123
//1234
//12345
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<=5;row++){
        for(col=0;col<=row;col++){
            printf("%c",ch+col);
        }
     printf("\n");    
    }
}