#include<stdio.h>

int main(){
    FILE *ptr1;
    int a,b;


    ptr1 = fopen ("sqr.txt","r");
    fscanf(ptr1,"%d",&a);
    printf("the value is %d\n",a);

    b = 2*a; 
    ptr1 = fopen ("sqr.txt","w");
    fprintf(ptr1,"new value is = %d\n",b);
    printf("the new value is %d\n",b);


   
    
    fclose(ptr1);
  
    
    

    return 0;
}