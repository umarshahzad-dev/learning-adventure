//Write the program code that finds the largest of 10 integers entered from the keyboard.
//Klavyeden girilen 10 adet tam sayının en büyüğünü bulan program kodunu yazınız.

#include<stdio.h>
#include<limits.h>//with this header file we are able to use INT_MIN and INT_MAX which gives us the minimum and maximum values for an integer in C programming language.
int main()
{
    int number, largestno = INT_MIN;//we are storing the minimum value for  integer in the  variable "largestno".
    
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("enter the %d. number: \n", i+1);
        scanf("%d",&number);
        if (number > largestno)// the if condition checks if the  current input is larger than the previous largest number.
        {
            largestno = number;// if the contition is true the largest  number will be equal to the inputed number.
        }
    }
    printf("The largest number is: %d", largestno);
    
    return 0;
}