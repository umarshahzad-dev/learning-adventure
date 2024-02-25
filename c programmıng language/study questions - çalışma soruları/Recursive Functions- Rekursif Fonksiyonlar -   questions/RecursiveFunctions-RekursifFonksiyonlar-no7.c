//Write the recursive function that reverses the place values of the (n-digit) number entered from the keyboard. Example: Entered value: 1453, Result: 3541; Entered value: 12345, Result: 54321
//Klavyeden girilen (n basamaklı) sayının basamak değerlerini ters çeviren rekürsif fonksiyonu yazınız. Örnek: Girilen değer: 1453, Sonuc: 3541; Girilen değer: 12345, Sonuç: 54321

#include<stdio.h>

int Reverse(int number, int reverse);

int main()
{
    int number;
    
    printf("Enter a positive integer: "); // ask the user to input the number.

    scanf("%d", &number);

    printf("The  entered number is :%d.\n", number); // prints the number entered by user.
    

    printf("The reverse number is :%d\n", Reverse(number, 0));  // prints the reversed number.

    return 0 ;

}

int  Reverse(int number , int reverse)  // recursive function to reverse the number.
{

    if(number == 0 )   // in every  recursion it checks whether the number is zero or not . If yes then returns the value of reverse.
    {
        return reverse;
    }
        
    else  // if the entered number is not equal to 0 .
    {
        
        reverse = reverse * 10 + number % 10;// multiply  the previous reverse by 10 and add the last digit of the number.

        number /= 10;    // divide the number by 10 to remove the last digit.

        return Reverse(number,reverse);    // call the function again with the new number
    }

}
