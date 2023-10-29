// I copied this from GeeksfoGeeks -_-
// C program to find the count of positive
// and negative integers in an array
  
#include <stdio.h>
  
// Function to find the count of
// positive integers in an array
int count_pos_num(int* arr, int n)
{
    int pos_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos_count++;
    }
    return pos_count;
}
  
// Function to find the count of
// negative integers in an array
int count_neg_num(int* arr, int n)
{
    int neg_count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < 0)
            neg_count++;
    }
    return neg_count;
}
  
// Function to print the array
void printArray(int* arr, int n)
{
    int i;
  
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
  
// Driver program
int main()
{
    int arr[] = { 2, -1, 5, 6, 0, -3 };
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
  
    printArray(arr, n);
  
    printf("Count of Positive elements = %d\n",
           count_pos_num(arr, n));
    printf("Count of Negative elements = %d\n",
           count_neg_num(arr, n));
  
    return 0;
}