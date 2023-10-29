#include<stdio.h>

int main(){
    FILE *sptr;
    int num=22;
    sptr = fopen("abs.txt","w");
    fprintf(sptr,"The num is %d\n",num);
    fprintf(sptr,"fprintf used to write over a file and fscanf for taking input from a file",num);
    fclose(sptr);

    return 0;
}