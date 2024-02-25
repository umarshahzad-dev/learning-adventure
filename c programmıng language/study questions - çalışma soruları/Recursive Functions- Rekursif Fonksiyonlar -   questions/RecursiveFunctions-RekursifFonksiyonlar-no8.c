//Write the program code that prints the largest number of digits of the number entered from the keyboard, using a recursive function. Example: Entered value: 1253, since the number is 4 digits Result:9999
//Klavyeden girilen sayının basamak sayısındaki en büyük sayıyı yazdıran program kodunu rekürsif fonksiyon kullanarak yazınız. Örnek: Girilen değer: 1253, sayı 4 basamakli olduğu için Sonuc: 9999

#include<stdio.h>

int LargeDigit(int number , int newnum , int large_digit);

int main()
{
    int number;
    
    printf("Enter a positive integer: ");  //  Entering the input from user
    scanf("%d", &number);

    int large_digit = 0, temp;

    temp = number;
    while (temp != 0)       // while loop to find the largest digit in the number to send it to the recursive funcion.
    {
        if (large_digit < temp%10)
            large_digit = temp%10;
        temp = temp / 10;
    }

    printf("The result is :%d. \n",LargeDigit(number, 0 ,  large_digit));  // prints the result  of the function call.

    return 0 ; 
}

int LargeDigit(int number, int newnum , int large_digit)     // Function to get the required  output
{
    if (number  == 0)           // when the number is 0 then it will return the new number created.
    {
        return newnum;
    }
    else
    {
        newnum = newnum*10  + large_digit;   // multiply the new number  by 10 and add the largest digit of previous number in each iteration

        return  LargeDigit(number/10,newnum, large_digit) ; //  Recursive call with number divided by 10.
    }
        
}
