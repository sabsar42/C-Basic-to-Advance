#include<stdio.h>
#include <stdlib.h>
// malloc doesn not intialize 0 (zer0)
// malloc(how many * what type)

int main(){
    int i,*ptr;
    printf("The size of int in my pc is %d\n",sizeof(int));
    printf("The size of float in my pc is %f\n",sizeof(float));
    printf("The size of char in my pc is %c\n\n",sizeof(char));
    ptr =(int*)malloc(6*4); // sizeof int in my pc is 4!
    ptr =(int*)malloc(6*sizeof(int)); // malloc -->  memory allocation
   /* malloc(6*sizeof(int)) == 6 * means how many ( int's) memory i want to be allocated 
    like here I want ^ of int to be allocated ! */

    /* arr[24] == defining an array is like allocating space for 24 bytes manually
    same thing happening in - malloc()-- == its allocationg memory dynamically
    so , we can evenuse it like an array */

    for (int i = 0; i < 6; i++)
    {
        printf("Enter series of %d s vale =\n",i+1);
        scanf("%d",&ptr[i]);
    }
  for (int i = 0; i < 6; i++){

    printf("%d series  value is =%d \n",i+1,ptr[i]);
  }

    
    return 0;
}