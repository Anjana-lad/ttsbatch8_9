//prime number using goto
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter Number");
    scanf("%d", &n);
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            break;
            goto label;
        }
    }
  label:
    if(i>n/2)
        printf("%d is PRIME",n);
    else
        printf("%d is NOT PRIME", n);
}