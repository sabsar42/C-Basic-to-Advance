#include<stdio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    // ptr = marks // works the same as abobe
    for(int i=0;i<=5;i++){
        printf("The %d s num are :", i+1);
        scanf("%d",ptr);
        ptr++;


    }
    for(int i=0;i<=5;i++){
        printf("The %d s num are :%d", i+1,marks[i]); }
        



    return 0;
}