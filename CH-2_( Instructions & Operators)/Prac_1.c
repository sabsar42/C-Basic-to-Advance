#include<stdio.h>

int main(){
    // // int a;  b=a ; wont run bcz b is not decalerd
    // int a; int b=a ;
    // int v = 3^3;    
    // //  int v = 3^3 is valid but will not give 9 ; have to use pow from math.h
    // char dt = '2'
    // // char dt = '2' wont throw erro but (char dt = '21 december') will bcz multiple charactr.
     
     int num;

     printf("enter num");
     scanf("%d,%f", &num);
     printf("the divisiblity is %d", num%97);
     
    
    return 0;

}