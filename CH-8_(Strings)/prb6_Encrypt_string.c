#include <stdio.h>

// String Encryption !
void encrypt(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')

    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char c[ 80 ]; //for individual string allocation not  ( *c )
    printf("Enter a string to Encrypt = ");
    gets(c);
    encrypt(c);
    printf("Encrypted string is : %s",c);

    return 0;
}