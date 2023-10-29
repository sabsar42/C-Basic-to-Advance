#include <stdio.h>

// String Encryption !
void decrypt(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')

    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[ 80 ]; //for individual string allocation not  ( *c )
    printf("Enter Encrypted string to Decrypt = ");
    gets(c);
    

    decrypt(c);
    printf("Decrypted string is : %s",c);
    return 0;
}