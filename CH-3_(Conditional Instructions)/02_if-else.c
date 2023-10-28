
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age>=80){
        printf("your above 80 you cant drive");
    }
    else{
        printf("You can drive");
    }

    if (age==50) // if(age=50)- its an assignment operator that wont throw an error but will assign the value 50 to the condition.

    {
       printf("half century");
    }
    

    return 0;
}