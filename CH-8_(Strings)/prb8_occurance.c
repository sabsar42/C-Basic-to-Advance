#include <stdio.h>
int occurence(char st[ ], char *c){

char *ptr = st;  // Pointing the address of the array
int count = 0;   // Initialized count as Zero
while (*ptr != '\0')  // going through all the characters untill null comes at the end

{
    if (*ptr == *c)  // whenever the addresses value equals to addresses of the input , start counting
    {
        count++;   // Increment the count as long as the condition is satisfied
    }
    ptr++ ;       // Increment the address 

}
 return count;    // Finally at the very end it exits the whole loop and returns count

}


int main()
{
    char x[90 ] ;
    char d;

    printf("Enter the string =");
    gets(x);

    printf("Enter the occurenter =");
    scanf("%c",&d);
    


    int count =occurence(x, &d);
    printf("The Occurence of ( %c ) is = %d", d, count);
    return 0;
}