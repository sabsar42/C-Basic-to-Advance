#include<stdio.h>
int fib(int num);

int main(){
    int n;
    printf("Enter a=\n");
    scanf("%d",&n);
    printf("the %dth element of fibonacci series is %d",n,fib(n));
    
    return 0;
}
// nth fibonacci number   // I did not understand this fibonacci 

int fib(int num){
    if (num<=1)
    {
        return num;
    }
    return fib(num-1)+fib(num-2);
    
}
