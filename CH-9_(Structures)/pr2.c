#include <stdio.h>

struct vector
{
    int x;
    int y;
};


struct vector  sumVector(struct vector v1, struct vector v2)
{ struct vector result;
 result.x =v1.x + v2.x;
 result.y =v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2,sum;
    v1.x = 11;
    v1.y = 22;

   

    
    v2.x = 11;
    v2.y = 22;
     sum = sumVector(v1,v2);


    printf("sum of v1 and v2 is %d\n %d", sum.x,sum.y);

    return 0;
}