#include <stdio.h>

int main()
{
    int num, i;
    int m[10];
    printf("enter the number for multiplication table =");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        m[i] = num * (i + 1);
        printf("%d x %d = %d\n", num, i + 1, m[i]);
    }
   
    return 0;
}