
#include <stdio.h>
#include <stdlib.h>
// realloc () --> reallocates memeory

int main()
{
    int i, *ptr;

    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter series of %d s vale =\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {

        printf("%d series  value is =%d \n", i + 1, ptr[i]);
    }
    

     // Reallocating the same memoey used in above for reusibality using realloc()
     // so we can use thhe same memoery for another allocation
    ptr = realloc(ptr,10*sizeof(int));
     
    for (int i = 0; i < 10; i++)
    {
        printf("Enter series of %d s vale =\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {

        printf("%d series  value is =%d \n", i + 1, ptr[i]);
    }
    
    return 0;
}