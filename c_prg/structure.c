//structure is a user defined data-type.
#include<stdio.h>
union student{
 // structure members;
     int rollno;
    char name[5];
    float marks;
} s1,s2;  //s1,s2 = structure variable
int main(){
   //  struct student s1,s2; // second method for defining  structure variables;
    printf("Enter name:");
    gets(s1.name);    //structure-variable.structure-data_member;
    printf("Enter rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter marks:");
    scanf("%f",&s1.marks);

while((getchar())!='\n');

    printf("Enter name:");
    gets(s2.name);  //structure-variable.structure-data_member;
    printf("Enter rollno:");
    scanf("%d",&s2.rollno);
    printf("Enter marks:");
    scanf("%f",&s2.marks);
    printf("\n Student details:\n");
    printf("\nRollno=%d",s1.rollno);
    printf("\nName=%s",s1.name);
    printf("\nMarks=%f",s1.marks);

    printf("\nRollno=%d",s2.rollno);
    printf("\nName=%s",s2.name);
    printf("\nMarks=%f",s2.marks);
}