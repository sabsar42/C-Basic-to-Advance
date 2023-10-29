#include<stdio.h>
int sum (int a, int b);

int main(){
    int a=7,b=4;
    printf("The sum of a and b is before function call %d\n", sum(a,b));
    printf("The sum of a and b is %d\n", sum(a,b));
    printf("The sum of a and b is after function call %d\n", sum(a,b));
    return 0;
}
int sum (int a, int b){
    int c;
    c=a+b;
    a=222;
    b=333;
    return c;
    // it is Call by value
/* Cant change main function variable   with a function that I have defined  
But I can with  pointer */

}