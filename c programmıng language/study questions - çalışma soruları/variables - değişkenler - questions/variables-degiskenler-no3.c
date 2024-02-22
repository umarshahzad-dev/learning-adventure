//Write the C program code for the y= (3*a^2+2*b^3+c^4)/6 function. Example: If a,b and c=1, y=1.
// y= (3*a^2+2*b^3+c^4)/6 fonksiyonuna ait C program kodunu yazınız. Örnek: a,b ve c=1 ise y=1 olmalıdır.

#include<stdio.h>

int main()
{
    int a , b , c ;//to  store values of a,b & c
    printf("Enter value of ( a , b , c ) : ");//prompt user to enter values of a,b & c.
    scanf("%d %d %d", &a , &b , &c);//reads the entered values of a,b & c from keyboard
    //we can also use seperate scanf for each variable , but  here we used one statement to read all three variables at once.
    
    float y = ( 3 * a * a + 2 * b * b *b + c * c * c * c) / 6.0;
  
    printf("y=%.2f\n",y);
    
    return 0;

}