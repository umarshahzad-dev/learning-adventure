//Write a recursive function that finds the perfect number less than a number entered from the keyboard.
//A whole number that is equal to the sum of its positive factors, excluding the number itself.
//Example: 28
//Its positive factors are {1, 2, 4, 7, 14, 28}. Excluding the 28 the sum is 1 + 2 + 4 + 7 + 14 = 28, so 28 is a Perfect Number.
//Klavyeden girilen bir sayıdan küçük olan mükemmel sayıyı bulan özyinelemeli bir fonksiyon yazınız.
//Kendisi hariç pozitif çarpanlarının toplamına eşit olan tam sayı.
//Örnek: 28
//Pozitif çarpanları {1, 2, 4, 7, 14, 28}'dir. 28 hariç toplam 1 + 2 + 4 + 7 + 14 = 28, dolayısıyla 28 bir Mükemmel Sayıdır.

#include<stdio.h>

void perfectNumber(int number );

int main()
{
    int number; 

    printf("Enter your number: ");// takes the number from the user.
    scanf("%d",&number);

    perfectNumber(number-1);// sends (number-1) to function because we have to find the perfect number less then the number entered.

    return 0;
    
}

void perfectNumber(int number)// function to find the perfect number.
{
    if (number < 6)// checks if the number is less then 6 because there is no perfect number less then 6.
    {
        printf("There is no perfect number less than the number you entered.");// if the number is less then 6 prints "There is no perfect number less than the number you entered."
        return;// exits the function.
    }
    int sum = 0 ;                           // variable to store the sum of the positive factors of the number.
    for (int i = 1 ; i < number ; i ++)  // loop to check the positive factors of the number . 
    {
        if (number %i == 0)
        {
            sum += i; // add and store the positive factors in the sum variable.
        }
    }

    if (sum == number )// checks if the sum is equal to number.
    {
        printf("The perfect number less then the number you entered is %d",number); // if yes prints the number as a perfect number . 
        return;// exits the function.
    }
    else                        
    {
        perfectNumber(number-1);// if the number is not a perfect number then again sends (number-1) to the recursive function.
    }

}

