#include<stdio.h>
#include<string.h>

// three steps
char *mystrcpy(char *tar,char *src)
{
	//1. 
	char *str=tar;
	while(*src!='\0')
	{
		//2.
		*str++=*src++;
	}
	// 3 Important! ! !
	str='\0';
	return str;
}


int main(){
   
    char *st="saksh";
    char st2[50];
    
    mystrcpy(st2,st); 
    printf("Now the st2 is %s",st2);
    return 0;
}