#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50];
    char st2[50];
    int i = 0;
    char c;

    printf("Enter a word = ");
    scanf("%s", st1); //st1 already stores the address as its ana array /no need of & /

    printf("The anothere word is charcter by charcer =\n");
    
    while (c != '\n')
    { 
        fflush(stdin);
        scanf("%c", &c);
        printf("%c", c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';
        printf("The word is = %s\n", st1);
    printf("The another word is = %s\n", st2);

      printf("Strcmp for these string is  %d ", strcmp(st1, st2) );


    return 0;
}