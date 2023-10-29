#include<stdio.h>
void printarray(int *ptr, int n);

int main(){
    int a[]={2,32,32,3,32,322,3};
    printarray(a,7);
    // printf("%d",a[2]);

    return 0;
}
void printarray(int *ptr, int n){
    for (int i = 0; i < n ; i++)
    {
        printf( "Roll no %d s number is %d\n", i+1,*(ptr+i));
    }
    //  ptr[2]=55;
    
}