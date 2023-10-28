#include<stdio.h>

int main(){
    FILE *ptr;
    char c ;
    ptr = fopen("skb.txt","r");
    c =fgetc(ptr); //took a character from skb.txt file  -- it workd even withou this
    while(c!=EOF){          // running the loop until EOF ( End OF File )
        
          c =fgetc(ptr);      // getting new character as input in c from skb.txt using fgetc()
          printf(" %c",c);    // printing it until EOF
    }
    return 0;
}