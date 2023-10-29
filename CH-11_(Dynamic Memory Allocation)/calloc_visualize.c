#include <stdio.h>
#include <stdlib.h>
//  Taking users Input for calloc() using scanf 
int main()
{
    int n, *ptr;

    printf("enter the number of integers =");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter series of %d s vale =\n",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < n; i++){

    printf("%d series  value is =%d \n",i+1,ptr[i]);
  }
    return 0;
}