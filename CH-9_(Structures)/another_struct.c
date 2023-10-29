#include<stdio.h>
#include<string.h>

struct employee
{

    int code;
    float salary;
    char name[200];
};

int main(){

    struct employee shakib = {10,12.3,"absar"};
    printf("the code is = %d\n", shakib.code);
    printf("the code is = %f\n", shakib.salary);
    printf("the code is = %s\n", shakib.name);
     



    
    
    
    return 0;
}