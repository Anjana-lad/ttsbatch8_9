//constant or # define
#include<stdio.h>
//#define pi 3.14
int main(){
    int radius;
    float area;
  const float pi=3.14;
    printf("Enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area of circle =%f",area);
}
