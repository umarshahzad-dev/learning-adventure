//y= 3*x^2 You need to code the C program for the function. Example: If x=2, y=12. 
//y= 3*x^2 Fonksiyona ait C programını kodlamanız gerekir. Örnek: x=2 ise y=12 olmalıdır.

#include<stdio.h>
int main()
{
    float x , y ;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    y = 3*x*x;
    printf("\nThe value of y when x=%.2f is %.2f ",x,y);
    return 0;
}
