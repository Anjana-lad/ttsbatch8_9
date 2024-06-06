//* * * * *
//* * * * 
//* * *
//* *
//*
#include<stdio.h>
int main(){
    int row,col;
    for(row=0;row<=5;row++){
        for(col=5;col>=row;col--){
            printf("* ");
        }
    printf("\n");
    }
}