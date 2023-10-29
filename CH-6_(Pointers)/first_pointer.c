#include<stdio.h>
// I can change the variables value if I have the address of it !

int main(){
    
    int i=9;
    int *j=&i; // *j points to i's address in (int i) that has i's value  
    /* like only j will print the address of i ( &i ) but won't go to the Value
    and  ( *j ) will print the value of i means it will directly go to ( int i )*/
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",*j);
    printf("address of i is %u\n",&i); /* %u is a specifier to define the address like %d for  Decimal */
    printf("address of i is %u\n",j); //printing i's address ... j already stores &i
    printf("address of j is %u\n",&j); //printing j's address
    /* address measn where the values are stored in the memory blocks 
    adresssing the memory */
    printf("Value of j is %d\n",*(&j)); // Value at address of j
    // (*) means pointing the VALUE !!
    return 0;
}