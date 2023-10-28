#include<stdio.h>

int main(){
    char a[40], b[40];
    FILE *ptr1;

    ptr1 = fopen ("sal1.txt","w");
   
    printf("enter name1 and salary =");
    scanf("%s",a);
    fprintf(ptr1,"name1 = %s\n",a);

    printf("enter name2 and salary =");
    scanf("%s",b);
    fprintf(ptr1,"name2 = %s",b);
    
    fclose(ptr1);
  
    
    

    return 0;
}