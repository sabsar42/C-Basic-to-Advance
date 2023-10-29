#include <stdio.h>

//Check whether the input character is present in this string or not

// I made somhow this... please modify and make it neat later ??

void presence(char st[ ], char *c){

char *ptr = st;  // Pointing the address of the array
   // Initialized count as Zero
while (*ptr != '\0')  // going through all the characters untill null comes at the end

{
    if (*ptr == *c)  // whenever the addresses value equals to addresses of the input , start counting
    {
       printf("Its is prenet ");// Increment the count as long as the condition is satisfied
    }
    ptr++ ;       // Increment the address 

}
   // Finally at the very end it exits the whole loop and returns count

}


int main()
{
    char x[90 ] ;
    char d;

    printf("Enter the string =");
    gets(x);

    printf("Enter the occurenter =");
    scanf("%c",&d);
    


    presence(x, &d);
    // printf("The inout is present in here of ( %c ) i", );
    return 0;
}