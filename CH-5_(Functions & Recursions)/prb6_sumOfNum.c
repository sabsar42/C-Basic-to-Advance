#include<stdio.h>
int number(int num);

int main(){
    int a;
    printf("Enter a=\n");
    scanf("%d",&a);
    printf("the sum is %d",number(a));
    
    return 0;
}
// recursive function to calculate n natural numbers

int number(int num){
    int sum = (num*(num+1))/2;
    return sum;
}
