#include<stdio.h>

int main()
{    
    // char str[ ] = {'S', 'h', 'a', 'k', 'i', 'b', }; 
    // Run this without null character ! 



    // char str[ ] = {'S', 'h', 'a', 'k', 'i', 'b', '\0'}; 
    // same thing 
    char str [ ]="Shakib";
    char *ptr =  str;
    /* loop will continue untill null *ptr points to '\0' (null character) */
    // thats why null is importnat !
    while (*ptr!='\0')
    {
        printf("%c",*ptr); // points to the address of str string .
        // printf("%u\n", ptr);
        // printf("%u\n", *ptr);
        // printf("%d\n", *ptr);
        // printf("%d\n", ptr);
        ptr++;
    }
    
    return 0;
}