//      *
//    * * *
//  * * * * *
//* * * * * * *
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=4;row++){
//         for(space=4;space>=row;space--){
//             printf("   ");
//         }
//         for(col=1;col<=(2*row)-1;col++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// * * * * * * *
//   * * * * *
//     * * *
//       *

 #include<stdio.h>
 int main(){
    int row,col,space;
    for(row=4;row>=1;row--){
        for(space=4;space>=row;space--){
            printf("   ");
        }
        for(col=(2*row)-1;col>=1;col--){
            printf(" * ");
        }
    printf("\n");
    }
 }