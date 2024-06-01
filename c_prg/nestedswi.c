//nested switch :switch case inside switch case.
#include<stdio.h>
int main(){
    int choice,ch;
    printf("\n Menu Details:");
    printf("\n 1. Pizza");
    printf("\n 2.Cold-drink");
    printf("\n Enter choice of food:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\n You have selected pizza.");
            printf("\n Pizza menu:");
            printf("\n 1. Veg pizza");
            printf("\n 2. cheese Pizza");
                printf("Enter choice of pizza:");
                scanf("%d",&ch);
                switch (ch)
                {
                case 1:
                    printf("You have selected veg pizza.");
                    break;
                case 2:
                    printf("You have selected cheese pizza.");
                    break;
                default:
                    printf("do again");
                    break;
                }
        break;
        case 2:
         printf("You have selected cold-drink.");
         printf("\n cold-drink menu:");
         printf("\n 1. fresh juice");
        printf("\n 2. coca-cola");
        printf("Enter choice of drink:");
        scanf("%d",&ch);
               switch (ch)
                {
                case 1:
                    printf("You have selected fresh juice");
                    break;
                case 2:
                    printf("You have selected coca cola  ");
                    break;
                default:
                    printf("do again");
                    break;
                }
        break;
        default:
         printf("Invalid choice.");
        break;
    }
}