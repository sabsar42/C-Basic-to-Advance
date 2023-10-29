#include <stdio.h>
#include <stdlib.h>
//  Taking users Input for calloc() using scanf
int main()
{
    int n,*ptr;
    int *ptr1;

    // printf("enter the number of integers =");
    // scanf("%d", &n);
    ptr = (int *)malloc(600*sizeof(int));

    for (int i = 0; i < 600; i++)
    {
        ptr1 = (int *)malloc(6000000*sizeof(int));

        printf("Enter series of %d s vale =\n", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr1);
        // free() deallocates or frees up memory for smooth usablity
    }

    for (int i = 0; i < 600; i++)
    {

        printf("%d series  value is =%d \n", i + 1, ptr[i]);
    }
    return 0;
}