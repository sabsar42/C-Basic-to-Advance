// 12:34:00
#include<stdio.h>
typedef struct complex{
    int real;
    int complex;

} comp;

void display(comp c){
    printf("the value of real part is %d\n ",c.real);
    printf("the value of imaginary part is %d\n ",c.complex);
}
 
int main(){
    
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real values for %d num\n",i+1);
        scanf("%d",&cnums[i].real);
    
        printf("Enter the complex values for %d num\n",i+1);
        scanf("%d",&cnums[i].complex);
    }
     for (int i = 0; i < 5; i++)
     {
         display(cnums[i]);
     }
    
    return 0;
}