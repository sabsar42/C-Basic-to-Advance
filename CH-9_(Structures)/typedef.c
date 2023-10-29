#include<stdio.h>
#include<string.h>


// Typedef makes it easier to use my own created data type more convinently .
// using 

/* typedef struct data type { 

} the updated data type ;

*/



//  the updated data type  = int 
//  and is more convinent ;
 

//  typedef to create alias name




typedef struct employee
{

    int code;
    float salary;
    char name[200];
} emex ;
 




//  void show(emex sempz)------same
 void show(struct employee sempz)

{

printf("The code is employee is= %d\n",sempz.code);
printf("The salary is employee is= %f\n",sempz.salary);
printf("The name is employee is= %s\n ",sempz.name);

}


int main(){
    
    emex e1;
    emex *ptr;   //pointing struct employee type variable

    ptr = &e1; //pointing the address of e1


    
  ptr->code=11;
  ptr->salary=1.1;
  strcpy(ptr->name,"shakib");

 show(e1);

   
    return 0;
}