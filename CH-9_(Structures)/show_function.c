#include<stdio.h>
#include<string.h>



struct employee
{

    int code;
    float salary;
    char name[200];
};
 
void show(struct employee emp)

{

printf("The code is employee is= %d\n",emp.code);
printf("The salary is employee is= %f\n",emp.salary);
printf("The name is employee is= %s\n ",emp.name);

}

int main(){
    
    struct employee e1;
    struct employee *ptr;   //pointing struct employee type variable

    ptr = &e1; //pointing the address of e1


    
  ptr->code=11;
  ptr->salary=1.1;
  strcpy(ptr->name,"shakib");


   show(e1);
    
    
    return 0;
}