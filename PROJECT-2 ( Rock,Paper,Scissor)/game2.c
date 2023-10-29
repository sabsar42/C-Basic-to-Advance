// game for rock, paper, scissor

// Do a string
// and a loop

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
rr 
pp
ss

rp 
rs 
pr 
ps 
sp 
sr 

*/

int gameshow(char me, char comp)
{

    if (me == comp)
    {
        return 0;
    }

    else if (me == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (me == 'r' && comp == 'p')
    {
        return -1;
    }

    else if (me == 's' && comp == 'p')
    {
        return 1;
    }
    else if (me == 'p' && comp == 's')
    {
        return -1;
    }

    else if (me == 'r' && comp == 's')
    {
        return 1;
    }
    else if (me == 's' && comp == 'r')
    {
        return -1;
    }
}

int result(int res)
{
    if (res == 0)
    {
        printf("Game Draw\n");
    }
    else if (res == 1)
    {
        printf("You Win !!!\n");
    }
    else
    {
        printf("You Lose !!!\n");
    }
}

char number(int num)
{

    if (num < 33)
    {
        return 's';
    }
    else if (num > 33 && num < 66)
    {
        return 'p';
    }
    else
    {
        return 'r';
    }
}

int main()
{
    char me, comp, answer;

   
        srand(time(0));
        int num = rand() % 100 + 1; //random number generator

        comp = number(num);


        printf("Enter your turn = ");
        scanf("%c", &me);

        int res = gameshow(me, comp);
        
        printf("You Entered %c and computer chose %c\n", me, comp);

        result(res);


   

 return 0;
}