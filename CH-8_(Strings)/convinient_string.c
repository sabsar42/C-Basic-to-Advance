#include<stdio.h>

int main(){
    // int a=4;
    // printf("%d",a);

    //  ( %s ) is format specifier , helps to print strings .
    // This is a direct way to print strings 


    char *ptr = "shakib absar";
    // will automatically add a null char convert it into a string  like BELOW
    
    char p[ ] = "shakib absar";
    printf("%s\n",ptr);
    printf("%s\n",p);
    return 0;
}