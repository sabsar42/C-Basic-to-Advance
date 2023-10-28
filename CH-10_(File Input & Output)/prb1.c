#include<stdio.h>

int main(){

    int a,b,c;
    FILE *ptr;
    ptr = fopen("prb1.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);  // fscanf to read from the file
    printf("%d %d %d",a,b,c);

    return 0;
}