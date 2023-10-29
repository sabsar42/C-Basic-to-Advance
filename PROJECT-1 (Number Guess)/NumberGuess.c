#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{

    int num;
    srand(time(0));
    num = rand()%100+1;
    printf("The random number is =%d", num);
    // scanf("%d", &num);
    // do
    // {
    //     if (num > 34)
    //     {
    //         printf("Lower Number Please");
    //         break;
    //     }

    //         else if (num < 34)
    //         {
    //             printf("Upper Number Please");
    //             break;
    //         }
    //         else
    //         {
    //             printf("You Guessed The Correct Number");
    //         }
    //     }
    //     while (34);
        return 0;
    }