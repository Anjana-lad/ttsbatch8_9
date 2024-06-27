//string functions:
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str3[20] ="l love programming";
    int len;
    printf("Enter string1:");
    gets(str1);
  
       printf("Str1=%s",str1);
    printf("\n Enter string 2:");
    gets(str2); 

    printf("\n Str2=%s",str2);
    
       printf("\n Str1=%s",str1);

       //len=strlen(str1);
      // printf("\n String 1 length=%d",len);

      // printf("\n str2 length =%d",strlen(str2));

      // printf("\n string to lower:= %s",strlwr(str1));

      // printf("\n string to upper =%s",strupr(str2));

      // printf("\n string compare :=%d",strcmp(str1,str2));

      // printf("\n string reverse: %s \n str 2=%s",strrev(str1),strrev(str2));

      // printf("\n string copy :=%s",strcpy(str3,str1));
      // printf("\n string 3=%s",str3);

  //  printf("\n string inside string : =%s",strstr(str3,"lov"));

  //  printf("\n string inside character :=%s",strchr(str3,'p'));
     
     //printf("\n string concatenate =%s",strcat(str1,str2));

     printf("\n string set %s",strset(str1,'d'));

}