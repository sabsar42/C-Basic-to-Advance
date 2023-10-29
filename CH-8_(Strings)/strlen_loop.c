#include<stdio.h>
#include<string.h>

int main(){
    char *pik = "Shakib bhai is just sailing away in the dessert";
    //  a = &pik;
    int s=strlen(pik);
    while (*pik!='\0')
    {
        printf("%d",strlen(pik));
        s++;
    }
    
    return 0;
}