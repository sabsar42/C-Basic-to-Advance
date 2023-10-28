#include <stdio.h>
int main()
{

    int a, b;
    printf("enter num of a");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else{
        printf("%d is odd\n", a);
    }

    return 0;
}