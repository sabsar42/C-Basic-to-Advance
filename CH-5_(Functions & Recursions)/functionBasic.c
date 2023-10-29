#include<stdio.h>
void display();    
 // Function Prototype Declare - making the function
/* Void means empty and display is function
Just like main is a function where int refers to integer instead of Void */


int main(){
    int a;
    printf("start Display Function\n");
    display();     // Function call // Called the display function to start is work from here 
    /* After Calling it will go into the function defination and will execute that function where
    main will remain numb untill the function i called has finished it work
    
    And ofcourse it will maintain The ORDER or Sequence as Usual
    After the Function defintaion has been executed it will return Here again to resume the remaining
    work(execution) that been left
  [ How do we know The called function has finished it work ??
    Thats we used a Printf after display ] */
   printf("Display Function finished it work\n");
    
    return 0;
}

void display()   // Just like  [   int main(){ }   ]
/* The difference is main function was develeoped by Devs.
and Display is developed by me */
{
    printf("This is Display\n");
} // after this it will roll back to Main function to Continue from there.