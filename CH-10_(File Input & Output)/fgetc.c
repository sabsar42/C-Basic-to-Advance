#include<stdio.h>

//  fgetc reads file character by character 

int main(){
    FILE *ptr;
    ptr =fopen("skb.txt","r");


    // char c =fgetc(ptr);
    // printf("The value is %c\n",c);


    //***************************// char c =fgets();  /// Doesnt work******************************

    // whole string 
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    return 0;
}