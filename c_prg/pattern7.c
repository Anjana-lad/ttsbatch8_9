//E D C B A
//D C B A
//C B A
//B A
//A
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<=5;row++){
        for(col=5-row;col>=0;col--){
            printf("%c",col+ch);
        }
        printf("\n");
    }

}