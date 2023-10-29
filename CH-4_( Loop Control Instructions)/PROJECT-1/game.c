#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num, guess, nguesses;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("The random number is =%d", num);

    do
    {
        printf("Guess a number from 1 to 100=\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower Number Please\n");
             
        }

        else if (guess < num)
        {
            printf("Upper Number Please\n");
            
        }
        else
        {
            printf("You Guessed The Correct Number in %d attempts\n", nguesses++);
        } 
        // nguesses++;
        
    }while (guess != num);
    return 0;
}