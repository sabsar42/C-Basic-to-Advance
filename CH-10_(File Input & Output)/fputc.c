#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("espx.txt", "w");
    fputc('k', ptr);
    fclose(ptr);

    return 0;
}