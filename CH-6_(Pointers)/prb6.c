#include<stdio.h>
int chnagevalue(int b);

// call by value 
int main(){
    int i=5;
    printf(" Value of i before function call is %d\n", i);
    chnagevalue(i);
    printf(" Value of i after function call is %d\n", i);
    return 0;
}
int chnagevalue(int b){
    
    b;
    int c =10*(b);
    return c;
    
    

}