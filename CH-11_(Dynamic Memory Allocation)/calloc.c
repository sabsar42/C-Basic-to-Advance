#include<stdio.h>
#include <stdlib.h>
// calloc automatically intializes 0 (zer0) in memoery blocks !!!
// calloc(how many , what type)

int main(){
    int i,*ptr;
    
  
 
    ptr =(int*)calloc(6,sizeof(int)); // calloc --> contiguous allocation of memory
   /* calloc(6 , sizeof(int)) == 6 time of ints bytes or memory */
   
// run it and see it automatically shows zero in calloc()
// where malloc( ) will display garbage
  for (int i = 0; i < 6; i++){

    printf("%d series  value is =%d \n",i+1,ptr[i]);
  }

    
    return 0;
}