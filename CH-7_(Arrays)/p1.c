#include<stdio.h>

int main(){
    int ar[10];
    int *ptr=&ar[0]; // pointing 1st element of memory
    // int *ptr=ar;  works same as above
    if((ptr+2)==&ar[2]){
        printf("these point same address");
    }
    else{
        printf("it doesnt point same address");
    }
    return 0;
}