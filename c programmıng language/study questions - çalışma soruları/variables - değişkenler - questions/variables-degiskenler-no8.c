//Write the program code that finds the 1st, 2nd and 3rd digits (Place Values) of the 3-digit number entered from the keyboard (from the left).
//Example: If it is 471, the 1st digit should be written as 4, the 2nd digit should be written as 7, and the 3rd digit should be written as 1.
// Klavyeden girilen 3 basamaklı sayının (soldan) 1. 2. ve 3. basamağını (Basamak Değerlerini) bulan program kodunu yazınız. 
//Örnek: 471 ise 1. Basamak 4, 2. Basamak 7, 3. Basamak 1 şeklinde yazmalıdır.

#include <stdio.h>

int main() {
    int number, FirstDigit, SecondDigit, ThirdDigit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);// Gets the 3 digit number from user.

    printf("The number you entered is: %d\n", number);// prints the number taken from the user.

    ThirdDigit = number % 10;// Gets the third digit of the number.
    number /= 10;            // Removes the last digit from the number.
    SecondDigit = number % 10;// Gets the second digit of the number.
    number /= 10; //again removes the last digit from the number.
    // Now "number" holds only the first digit.
    FirstDigit = number;// so we store the number into the variable FirstDigit.

    //prints the the digit values.
    printf("First digit of the number is: %d\n", FirstDigit);
    printf("Second digit of the number is: %d\n", SecondDigit);
    printf("Third digit of the number is: %d\n", ThirdDigit);

    return 0;
}
