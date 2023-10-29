#include<stdio.h>
#include<string.h>


int main(){
     char st1[50]="Hello";
      char *st2="saksh";


    //   strcmp() is used to compare strings and 
    //    it returns value zero ( 0 ) if the string matches
    //    it returns value one ( 1 ) if the string dont matches
    //    it returns value minus-one ( -1 ) if the string mis-matches
    //    mismatche = if the ascii value of 2nd string character is greater than the 
    //    1st string any orderwise character then the string outputs negative value 
      
    //   char st1[50]="Hello";
    //   char *st2="Hezlo"; 

    //   this will give (-1) bcz  
    //   e's aschii value - z's ascii value = negative (-)
    //   it all depends on ASCII values and substracting one from another . basic math .
    //   thats strcmp() compares strings.
    //   PS : It cane be a null charcter's ('\0') ASCII value too 


      int val = strcmp(st1,st2);
      printf("The value is now %d",val);
    
    return 0;
}