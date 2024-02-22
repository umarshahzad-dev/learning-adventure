//Write the C program code that displays whether any 2 numbers are 3 times each other.
//Example1: number1:6, number2:18, Example2: number1:72, number2:24 should be written as “3 times each other” in both examples.
//Herhangi 2 sayının birbirinin 3 katı olup olmadığını ekrana yazan C program kodunu yazınız. 
//Örnek1: sayi1:6, sayi2:18, Örnek2: sayi1: 72, sayi2: 24 her iki örnekte de “birbirinin 3 katıdır” şeklinde yazmalıdır.

#include<stdio.h>

int main()
{
    int firstnum , secondnum ;

    printf("Enter the first number : ");//taking the first number
    scanf("%d", &firstnum);
    
    printf("\nEnter the second number : ");// taking the second number
    scanf("%d", &secondnum);

    if (firstnum == secondnum*3 || firstnum*3 == secondnum)// if statment to check wether both numbers are  3 times each other or not.
        printf("\n%d and %d are 3 times each other.", firstnum, secondnum);
    else
        printf("\n%d and %d are not 3 times each other.", firstnum, secondnum);
        
    return 0;

}