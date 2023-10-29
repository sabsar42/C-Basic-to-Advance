#include<stdio.h>
#include<string.h>

int main(){
    char *st="saksh";
    char st2[50];

    // strcpy() function is used copy content of second string into first string
    //strcpy( target, source )
    // here ( target )  copies the ( source )
    strcpy(st2,st);
    printf("Now the st2 is %s",st2);

    // target should have enough capacity to store the string // like st2 has 50 
    return 0;
}