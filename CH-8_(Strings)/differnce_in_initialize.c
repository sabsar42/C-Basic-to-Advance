#include<stdio.h>

int main(){
    // char ptr[ ] = "shakib absar";
    // cant reinitialize an array that holds multilple characters or known as string like below


    char *ptr = "shakib absar";
    ptr = "ABSAR SKB";
    // But I can reinitialize and pointer that holds the address of an string

    // Reinitialize = Assigning New or Updated Value
 
    printf("%s\n",ptr);
    return 0;
}