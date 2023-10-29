#include<stdio.h>
#include<string.h>

struct employee
{

    int code;
    float salary;
    char name[200];
};


int main(){

    struct employee e1;
    struct employee *ptr;   //pointing struct employee type variable

    ptr = &e1; //pointing the address of e1


    
//    (*ptr).code=11;

// can also use the arrow operator to write it like below 
   ptr->code=11;

   printf("%d",e1.code);
    
    return 0;
}