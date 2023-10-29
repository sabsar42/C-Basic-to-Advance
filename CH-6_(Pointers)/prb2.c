#include<stdio.h>
void printadd(int a);


int main(){
    int i=4; // i=4 stays the  same and remains only in main function
    printf("The value of i is  %d\n", i);
    printadd(i); // passing a copy of i to printadd function not the value
    printf("The address of  i is  %u\n", &i);

    return 0;
}
void printadd(int a)
{ // same i equals to 4 was called here that took another different block of memeory address
    printf("The address of a is  %u\n", &a);
// thats why output arent the same !!
}