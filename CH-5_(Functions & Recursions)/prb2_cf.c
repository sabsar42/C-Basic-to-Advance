#include <stdio.h>
int farenheit(int celsius);

int main()
{
    int c;
    printf("ENter c=\n");
    scanf("%d", &c);
    printf("Farenheiht is %d", farenheit(c));

    return 0;
}
int farenheit(int celsius)
{
   int far = (((9 * celsius) / 5) + 32);

    return far;
}
