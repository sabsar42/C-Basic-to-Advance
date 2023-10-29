#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, *ptr;

    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("7x%d =%d\n",i+1,7*(i+1));
        // scanf("%d", &ptr[i]);
    }
    // for (int i = 0; i < 6; i++)
    // {

    //     printf("%d series  value is =%d \n", i + 1, ptr[i]);
    // }
    

    printf("\n\n**** NOW AFTER REALLOCATION FOR 15 ****\n\n");
    ptr = realloc(ptr,15*sizeof(int));
     
   
    for (int i = 0; i < 15; i++)
    {
        printf("7x%d =%d\n",i+1,7*(i+1));
        // scanf("%d", &ptr[i]);
    }
    
    return 0;
}