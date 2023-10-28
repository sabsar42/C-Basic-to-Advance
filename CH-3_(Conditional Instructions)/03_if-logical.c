#include<stdio.h>

int main(){
    int age;
    int specialcase=0;
    specialcase=1 ;


    printf("Enter age\n");
    scanf("%d", &age);
    if((age<=80 && age>=18) || (specialcase==1) ){
        printf("you can  drive");
    }
    else{
        printf("You can  not drive");
    }
    return 0;
}