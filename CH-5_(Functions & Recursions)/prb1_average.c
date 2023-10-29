#include<stdio.h>
float average (int a, int b, int c);


int main(){
    int a,b,c;
   
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    printf("Enter c=");
    scanf("%d",&c);
    printf("The average is %f\n",average(a,b,c));
    return 0;
}
float average (int a, int b, int c){
  float result;
  result = (float)(a+b+c)/3; // Typecasting to float
  return result;


}