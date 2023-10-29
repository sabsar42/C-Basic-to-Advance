#include <stdio.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;

void showTime(time c)
{
    printf("The time is %d:%d:%d\n\n", c.hour, c.min, c.sec);
    // printf("The aa1's time is %d:%d:%d\n",a1.hour,a1.min,a1.sec);
    // printf("The b2's time is %d:%d:%d\n",b2.hour,b2.min,b2.sec);
}

int timecmp(time a1, time b2)
{

    if (a1.hour > b2.hour)
    {
        return 1;
    }
    if (a1.hour < b2.hour)
    {
        return -1;
    }

    ///////////////////
    if (a1.min > b2.min)
    {
        return 1;
    }
    if (a1.min < b2.min)
    {
        return -1;
    }

    /////////////////////////

    if (a1.sec > b2.sec)
    {
        return 1;
    }
    if (a1.sec < b2.sec)
    {
        return -1;
    }

    return 0;
}

void showtimecmp(int b)
{
    if (b == 1)
    {
        printf("A1 is greater\n\n");
    }

    else if (b == -1)
    {
        printf("B2 is greater\n\n");
    }

    else
    {
        printf("Both are Similar\n\n");
    }

}   

    int main()
    {

        time a1 = {20, 20, 20};
        time b2 = {20, 20, 20};

        printf("*********************\n");

        showTime(a1);
        showTime(b2);

        int a = timecmp(a1, b2);

        printf("Time comparison returns = %d\n\n ", a);
        showtimecmp(a);

        printf("*********************\n");
        return 0;
    }