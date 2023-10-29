#include<stdio.h>

int main(){
    char str[] = {'S', 'h', 'a', 'k', 'i', 'b', '\0'}; 
    // '\0'  is a null character that should be at the end of an string to determine where strings ends

       char str[] = "Shakib"; 
    // This ^ works the same
    // here C automatically adds a null character after it !
    return 0;
}