#include<stdio.h>
void reverse(int *arr, int n){
    for (int i = 0; i < ( n/2 ); i++)
     /* use n/2 otherwise using n would reverse the whole and
    answer would seem the same */

    {
        int temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for (int i = 0; i < 7;  i++){
        printf("The reverse of %d is %d\n", i,arr[i] );

    }


    return 0;
}