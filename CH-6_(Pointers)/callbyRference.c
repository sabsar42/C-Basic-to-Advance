#include<stdio.h>
void swap (int *a, int *b);
void wrong_swap (int a, int b);

int main(){
    int x=3,y=4;
    printf(" Before x  = %d y =%d\n", x,y);
    wrong_swap (x,y);//wont work cz its call by value
    printf(" after WrongSwap function call x = %d y =%d\n", x,y);
    swap (&x,&y);// will work bcz its call by refernce
    printf(" after Swap function call x = %d y =%d\n", x,y);
     

    return 0;
}

void wrong_swap (int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
void swap (int *a, int *b)  /* by int*a or int*b its calling the address of variable in main 
 thts why itsa able to change */
{
    int temp;
    temp=*a;
    *a=*b; // by *a or *b its calling the address of int*a and int*b
    *b=temp;
// this works bcz it calls by refernce means with pointer it points the address of variabel
// Thtas why the value in mains changes bcz of pointing the address
// but its not possible without pointer
 }

