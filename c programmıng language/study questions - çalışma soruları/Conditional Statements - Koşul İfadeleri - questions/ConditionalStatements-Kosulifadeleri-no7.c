//If the last digit (rightmost) of a 5-digit number is less than the first digit, write C code that replaces each other. Example: 24578 => 84572
//5 basamaklı bir sayının son basamağı (en sağdaki) ilk basamaktan küçükse birbiriyle yer değiştiren C kodunu yazınız. Örnek: 24578 => 84572 

#include<stdio.h>

int main()
{
    int number , firstpart , lastpart, originalNum;

    printf("Enter a 5-digit number: \n");
    scanf(" %d", &number);

    originalNum = number;
    lastpart = number % 10;
    number /= 10;
    while (number > 9) {
        number /= 10;
    }
    firstpart = number;

    printf("The entered number is %d\n",originalNum );

    if (lastpart < firstpart)
    {
        firstpart -=lastpart;
        number = lastpart * 10000 + (originalNum % 10000) + firstpart;
        printf("\nThe new number is :%d\n", number);
    }
    else
    {
        printf("\nNo need to change the digits.\n");
    }
     return 0;
}


