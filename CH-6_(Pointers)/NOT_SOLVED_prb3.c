#include<stdio.h>
int chnagevalue(int b);


int main(){
    int i=5;
    printf(" Value of i before function call is %d\n", i);
    chnagevalue(i);
    printf(" Value of i after function call is %d\n", i);
    return 0;
}
int chnagevalue(int b){
    
    int *a=&b;
    int c =10*(*a);
    return c;
    
    

}