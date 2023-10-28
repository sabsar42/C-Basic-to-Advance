#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the multipliccations number = ");
    scanf("%d", &num);

    ptr = fopen("table.txt", "w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, " %d x %d = %d\n", num, i, num * i); //fprintf to write it on the file
    }
    fclose(ptr);

    printf(" successfully wrote %d",num);
    return 0;
}