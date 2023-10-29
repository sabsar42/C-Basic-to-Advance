#include <stdio.h>

int main()
{   
    int n_std = 3;
    int n_sub = 5;

    int marks [3][5];

    for ( int i = 0; i < n_std; i++)
    {

        for (int j = 0; j < n_sub; j++){
            printf("ENter marks for stdnts %d in subject %d\n", i + 1, j + 1);
        scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < n_std; i++)
    {

        for (int j = 0; j < n_sub; j++){
            printf("The marks for stdnts %d in subject %d is = %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}