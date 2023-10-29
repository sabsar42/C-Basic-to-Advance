#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("Enter side=");
    scanf("%d",&side);
    printf("The area of the square is %.2f", pow(side,2)); // pow function is power came from <math.h>
    // use %f specifier for pow function not %d !!!
    // bcz pow returns double

    return 0;
}