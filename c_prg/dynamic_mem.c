//dynamic memory allocation(malloc):- 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int *ptr,i,n;
//    printf("enter size to allocate:");
//    scanf("%d",&n);
//   ptr=(int*)malloc(n*sizeof(int));
//    if(ptr==NULL){
//     printf("Not allocated");
//    }
//    else{
//     printf("Allocated.");
//     for(i=0;i<n;i++){
//         ptr[i]=i+1;
//     }
//     printf("\n printing array:");
//     for(i=0;i<n;i++){
//         printf("%d \t",ptr[i]);
//     }
// }
// }

// for sum using pointer (malloc);
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int *ptr,i,n,sum=0;
//    printf("enter total size");
//    scanf("%d",&n);
//      ptr=(int*)malloc(n*sizeof(int));
//    if(ptr==NULL){
//     printf("Not allocated");
//    }
//    else{
//     printf("Allocated.");
//     printf("\n Enter Elements:");
//     for(i=0;i<n;i++){
//         scanf("%d",ptr+i);   
//            sum+=*(ptr+i);  
//     }
//     printf("\n printing array:");
//     for(i=0;i<n;i++){
//         printf("%d \t",ptr[i]);
//     }
//   }
//  printf("\n Sum=%d",sum);
// }

// calloc program and free
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int *ptr,i,n,sum=0;
//    printf("enter total size");
//    scanf("%d",&n);
//      ptr=(int*)calloc(n,sizeof(int));
//    if(ptr==NULL){
//     printf("Not allocated");
//    }
//    else{
//     printf("Allocated.");
//     printf("\n Enter Elements:");
//     for(i=0;i<n;i++){
//         scanf("%d",ptr+i);   
//            sum+=*(ptr+i);  
//     }
//     printf("\n printing array:");
//     for(i=0;i<n;i++){
//         printf("%d \t",ptr[i]);
//     }
//   }
//  printf("\n Sum=%d",sum);
//  free(ptr);
// }

//realloc : reallocation of memory;

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int  i, n,*marks;
	char ans;
    printf("Total students");
    scanf("%d",&n);
	marks = (int*)malloc(n*sizeof(int)); 
	if (marks == NULL) {
		printf("memory cannot be allocated");
	}
	else {
		printf("Allocated");
         printf("\n Enter marks");
          for(i=0;i<n;i++){
             scanf("%d",marks+i);    
             }  
         
         for(i=0;i<n;i++){
            printf("\n marks = %p \n",marks); 
             }  
    
		do {
            while(getchar()!='\n');
			printf("would you like to add more(y,n): ");
			scanf("%c", &ans);
       			if (ans == 'y') {      
				marks = (int*)realloc(marks,(n+1)* sizeof(int)); 
				if (marks == NULL) {
					printf("memory cannot be allocated");
				}
				else {
                    printf("\n Enter Marks\n");
			        scanf("%d", &marks[n]); // Get the marks
					printf("\n base address of marks are:%pc",marks); 
                          n++;
				}
			}
		} while (ans == 'y');
		// print the marks of the students
		for (i = 0; i < n; i++) {
			printf("marks of students %d are: %d\n ", i,marks[i]);
		}
		free(marks);
	}
	return 0;
}
