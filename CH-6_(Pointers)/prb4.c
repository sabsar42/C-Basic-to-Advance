#include<stdio.h>
void sumandaverage(int a, int b, int *sum, float *average);

int main(){
    int i,j,sum;
    float average;
    i =4;
    j=5;
    sumandaverage(i,j,&sum,&average);
    printf("The sum is %d\n ", sum);
    printf("The average is %.2f\n ", average);
    
    return 0;
}
void sumandaverage(int a, int b, int *sum, float *average)
{ 
     *sum = a+b;
     *average = (float)(*sum)/2; // *sum/2 both integer will return a integer thats Typecasted to Float !

// Passed the address thats why void returnded !

}