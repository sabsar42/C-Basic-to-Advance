#include<stdio.h>

int main(){
    int a=4;
    printf("%d %d %d", a,++a,a++); /*here a++ displyed value 4 
                                    thee a++ got 5 by increment went to ++a and turned 6
                                    then 6 went to a and remain the same value 6 !
    
    /* Arguments on C in printf passes from -RIGHT to LEFT- !!!
    NOT LEFT to RIGHT !!!!
    It depdends on the Compiler mostly though ( here we used gcc complier )
    but displayed output in Left to Right */

    return 0;
}