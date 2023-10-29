#include<stdio.h>
#include<string.h>

int main(){
    char *sub = "Shakib absar";
    int a = strlen(sub);
    // printf("The sub strings length is %d",strlen(sub));
    printf("\nThe sub strings length is %d", a);
    /* we know theres a null character after every string 
    but strlen() doesn't counts the null ('\0') character after it */
    return 0;
}