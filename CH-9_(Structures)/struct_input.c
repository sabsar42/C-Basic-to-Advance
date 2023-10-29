#include<stdio.h>
#include<string.h>

struct employee {  
    int code;
    float salary;
    char name [10];
};                   //semicolon (;) is a must !!


int main(){
    struct employee e1,e2,e3;

    printf("enter E1's code =");
    scanf("%d",&e1.code);   
    printf("enter E1's salary =");
    scanf("%f",&e1.salary);
    printf("enter E1's name =");
    scanf("%s",e1.name);

    printf("enter E2's code =");
    scanf("%d",&e2.code);   
    printf("enter E2's salary =");
    scanf("%f",&e2.salary);
    printf("enter E2's name =");
    scanf("%s",e2.name);

    printf("enter E3's code =");
    scanf("%d",&e3.code);   
    printf("enter E3's salary =");
    scanf("%f",&e3.salary);
    printf("enter E3's name =");
    scanf("%s",e3.name);


    printf("------------------------------------------\n");

    printf(" E1's code = %d\n",e1.code);
    printf(" E2's code =%d \n",e2.code);
    printf(" E3's code = %d\n",e3.code);

    printf(" E1's salary =%f\n",e1.salary);
    printf(" E2's salary =%f\n",e2.salary);
    printf(" E3's salary =%f\n",e3.salary);

    printf(" E1's name =%s\n",e1.name);
    printf(" E2's name =%s\n",e2.name);
    printf(" E3's name =%s\n",e3.name);



    
    return 0;
}