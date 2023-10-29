#include<stdio.h>
#include<string.h>

// making a data ype of my own 
struct employee {  //user defined data type  its like (int)=(struct employee)
    int code;
    float salary;
    char name [10];
};                   //semicolon (;) is a must !!

int main(){
    int a=3;
    char c ='x';
    float l=2.4;
  //employee e1
  //e1.salary =34.33 -- wont workwithout employee structure

  struct employee e1; // (e1) is a variable and (struct employee) is custom data type like (int)
  e1.code=100;
  e1.salary =34.33;   // DOT(.) is a member operator
  // e1.salary =34.33 ;// 11;39;00
  // e1.name = "shakib" wont work bcs its chracter array not address
  strcpy(e1.name,"shakib");
  printf("%d",e1.code);
  printf("%f",e1.salary);
  printf("%s",e1.name);

  
    return 0;
}