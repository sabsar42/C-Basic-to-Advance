#include<stdio.h>

int main()
{
    int num;
    printf("Enter you num :\n");
    scanf("%d", &num);
    
    if(num==1){
        printf("the number i 1");
    }
     else if(num==2){
        printf("the number i 2");
    }
     else if(num==3){
        printf("the number i 3");
    }
    else{
        printf("Num is neiter 1,2 or 3");
    }
    
    return 0;
}
