#include<stdio.h>

int main(){
    FILE  *ptr;
    int num ,num2;
    ptr = fopen("skb.txt", "r"); 
    if(ptr == NULL){
        printf("The file doesnot exist");

    }
    else{ 
        
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);   // It is Very important to CLOSE the FILE !
    printf("the value is %d\n",num);
    printf("the value is %d\n",num2);
    }
    return 0;
}