#include<stdio.h>

int main(){
    int a=3;
    int *x= &a;
    printf("Value of s is %d\n",a);
    printf("Address of s is %u\n",&a);
    printf("Value of s is %d\n",*x);
    return 0;
}