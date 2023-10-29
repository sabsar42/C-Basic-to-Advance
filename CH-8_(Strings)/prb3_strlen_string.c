#include<stdio.h>

int strlen(char *st){
    char*ptr=st;
    int len=0;

    while (*ptr!='\0')
    {
        len++;
        ptr++; 
    }
    return len;
}

int main(){
    char st[ ] = "Shakib bhai is just sailing away in the dessert";
    //  a = &pik;
    int l= strlen(st);
    printf("the length is %d",l);
    
    return 0;
}