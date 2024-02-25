//Write the recursive function that finds how many digits there are in the number entered from the keyboard.
//Klavyeden girilen sayının kaç basamak olduğunu bulan rekürsif fonksiyonu yazınız.

#include<stdio.h>

int FindDigit(int number);

int main()
{
    int number;
    
    printf("Please enter a number: ");// ask the user to enter the nubmer.
    scanf("%d", &number);

    printf("The number  you entered have %d digits.", FindDigit(number));// prints the number of digits.

    return 0;
}

int FindDigit(int number)
{
    if (number < 10)
    {
        return 1;// If the number is less than  10, it has only one digit .
        
    }
    else
    {
        return 1 + FindDigit(number / 10);// Recursive call to find out how many digits are left .
    }                   
        
}
