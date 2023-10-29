#include<stdio.h>
void slice(char *st, int m , int n)
{
        int i = 0;
    while ((m+i)<n)
    {
        st[i]=st[i+m];   // until we reach ( n )
                         /*     st[ i ]=st[ i+m ]
                               st[ 0 ]=st[ 0 + 1 ] --> 1
                               st[ 1 ]=st[ 1 + 1 ] --> 2
                               st[ 2 ]=st[ 2 + 1 ] --> 3
                               these  [ 0 1 2 ]=[ S H A ] index will be replaced by [ 1 2 3 ] = [ H A K ] address
                               and wil stop before ( n = 4 = I ) . */
        i++ ;
    }
    // st[i] = '\0' ;
    /* As it stops beofre ( n ) and exits the loop it will add an ( null character ) after it */
    // Run it without null character !
}

int main(){
    // string slicing = taking a Slice / A part / or speicfic characters from String 
    char st[ ]= "SHAKIB";
    /* Index starts from 0 ; so here 1,2,3 characters are HAK !!  and it will stop before 4   !   */
    slice(st, 1, 4 ); // Here i want to print characters from  [ 1 to 4 ] means it will print characters [ 1,2,3]
    printf("%s",st);
    return 0;
}