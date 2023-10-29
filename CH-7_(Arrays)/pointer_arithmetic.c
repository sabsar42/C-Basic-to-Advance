#include <stdio.h>
/* integer in my computer takes 4 bytes of space (float too !!)
it varries from com architechure to archtiechure
Thats why incrementing the value adds 4 to the increment and so on
Same goes for the decrement too by removing 4 bytes !
As for character it only takes 1 byte of space */

int main()
{
    int i=4;
    int *ptr=&i;  
    printf(" The value of ptr is %u\n", ptr);
    ptr++ ; // 4byte int size in my computer

    printf(" The value of ptr after increment is %d\n", ptr);
    ptr++;
    ptr++;
    printf(" The value of ptr after double increment is %u\n", ptr);
    ptr=ptr+3;// ptr = ptr + n
    printf(" The value of ptr after triple increment is %u\n", ptr);
    ptr--;
    printf(" The value of ptr after decrement is %u\n", ptr);
    ptr=ptr-2;
    printf(" The value of ptr after double decreement is %u\n", ptr);

    // // for character ||

    // char a = 4;
    // char *ptr = &a;
    // printf(" The value of ptr as a charcter is %u\n", ptr);
    // ptr++; // 1byte char size in my computer

    // printf(" The value of ptr as a character after increment is %u\n", ptr);

    return 0;
}