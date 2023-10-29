#include<stdio.h>

int main(){
    char s[40];
 
    printf("Enter name :  ");
   
    gets(s);
    //gets() to print multiple world with a space in C thats not possible with scanf().
    puts(s);
    //prints string in new or the next line

    //here im using both ! see the difference !
    printf("Your name is : %s",s);
    
    return 0;
}