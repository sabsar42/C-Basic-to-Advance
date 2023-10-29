#include<stdio.h>

int main(){
    char a[ 10 ];
    printf("Enter anything = ");
    /* scanf automatically adds the null character when enter key is pressed */
    scanf("%s",a); // a is an array already stores address of 1st character no need to put & !
    //cant print full name with space ( shakib absar ) with Scanf() !!!
    // use gets() and puts() for multi-word string
    printf("You Entered= %s",a);

    return 0;
}