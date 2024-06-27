//string palindrome 
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int len=0,i,r=0;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]==str[len-i-1]){
            r++;
        }
    }
    if (r == len / 2) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
}