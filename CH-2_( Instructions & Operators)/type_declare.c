#include<stdio.h>

int main(){
    float a = 1.1;

    float b = a+8.9;
     printf("the value of b is %f\n", b);
    return 0;
}

// #include<stdio.h>

// int main(){
//     float b = a+8.9;   # This code wont run because it will go to b first then to a ; but in b theres is no value assigned for a so it will throw an ERROR !!

// float a = 1.1;
//      printf("the value of b is %f\n", b);
//     return 0;
// }