//without using string function strlen() find the length of string.
#include<stdio.h>
int main(){
    char str1[20];
    int i,len=0;
    printf("Enter string:");
    gets(str1);
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    printf("\n string length=%d",len);

}