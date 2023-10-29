#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)

    {
        printf("Enter marks of student  roll %d =", i + 1);
        // i+1 for USERS ease so that index starts from 1 rather than 0 ;
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)

    {
        printf("Marks of student  roll %d = %d\n", i + 1, marks[i]);
    }

    return 0;
}