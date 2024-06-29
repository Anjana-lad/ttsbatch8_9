//nested structure :structure inside structure 
#include<stdio.h>
struct employee{
    int e_id;
    float salary;
    struct department{  //inner structure 
        int dep_id;
        char dept_name[10];
    }dept;  //variable for inner structure
};

int main(){
    struct employee e1; //outer struct variable
    int i;
    for(i=0;i<3;i++){
    printf("\n Enter emp_id:");
    scanf("%d",&e1.e_id);
    printf("Enter salary:");
    scanf("%f",&e1.salary);
    printf("Enter Dept_id:");
    scanf("%d",&e1.dept.dep_id);
    printf("Enter department name:");
    scanf("%s",&e1.dept.dept_name);

    printf("\nEmployee details:\n");
    printf("\n Employee id=%d",e1.e_id);
    printf("\n Employee salary=%f",e1.salary);
    printf("\n Employee department id=%d",e1.dept.dep_id);
    printf("\nEmployee department name=%s",e1.dept.dept_name);
  }
}