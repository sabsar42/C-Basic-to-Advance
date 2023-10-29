#include<stdio.h>

int main(){
    int i=4;
    int *ptr=&i;
    int **ptr_to_ptr = &ptr;
    printf("The values are %d and %d", *ptr, **ptr_to_ptr);

    return 0;
}