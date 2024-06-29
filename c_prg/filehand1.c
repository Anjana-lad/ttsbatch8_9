// //file handling in c program.
// #include<stdio.h>
// int main(){
//      FILE *fp;
     
//      fp=fopen("G:\\ttsbatch8_9\\c_prg\\demo.txt","w+");
//      if(fp==NULL){
//         printf("File not created");
//      }
//      else{
//         printf("File created.");
    
//      }
//      fclose(fp);
// }

// file handling to insert data into file.
// #include<stdio.h>
// int main(){
//      FILE *fp;
//      char str[50];
//     printf("Enter string:");
//     gets(str);
//      fp=fopen("G:\\ttsbatch8_9\\c_prg\\demo.txt","w+");
//      if(fp==NULL){
//         printf("File not created");
//      }
//      else{
//         printf("File created.");
//      }
//     if(strlen(str)>0){
//         fputs(str,fp);
//         fputs("\n",fp);
//     }
//     printf("Data inserted to the file");
//      fclose(fp);
// }

//to read the data from the file.
#include<stdio.h>
int main(){
     FILE *fp;
     char str[100];
    // printf("Enter string:");
    // gets(str);
     fp=fopen("G:\\ttsbatch8_9\\c_prg\\demo.txt","r+");
     if(fp==NULL){
        printf("File not created");
     }
     else{
        printf("File created.");
        while(fgets(str,100,fp)!=NULL){
            printf("\n %s",str);
        }         
     }
}