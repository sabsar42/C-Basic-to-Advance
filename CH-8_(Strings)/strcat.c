#include<stdio.h>
#include<string.h>

int main(){
    char st1[50]="Hello";
      char *st2="saksh";

    //   strcat() takes value from second( st2 ) and attaches it with first ( st1 s)
      strcat(st1,st2);
      printf("str1 is now %s",st1);
    return 0;
}