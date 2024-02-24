//Write the recursive function that finds how many prime numbers there are between 2 numbers entered from the keyboard.
//Klavyeden girilen 2 sayı arasında kaç tane asal sayı olduğunu bulan rekürsif fonksiyonu yazınız.

#include<stdio.h>

void CountPrime(int firstnum , int secondnum, int count);

int main()
{
    int firstnum, secondnum , count = 0 ;

    printf("Enter first positive number :");
    scanf("%d",&firstnum);
    printf("Enter second positive number :");
    scanf("%d",&secondnum);

    if (firstnum > secondnum)                   // if the first number user enters is larger then the second number 
    CountPrime(secondnum, firstnum , count);    // it sends the smaller number as first number and larger number as the second number.
    else
        CountPrime(firstnum, secondnum, count );
    
    return 0;
}

void CountPrime(int firstnum , int secondnum , int count)  // recursive function to find prime numbers between two numbers.
{
    if (secondnum <= 1 || secondnum <= firstnum)        // checks if the larger number is less then and equal to 1 or larger number is less then or equal to smaller number.
    {
        printf("There are %d prime number between two numbers you entered. \n" ,count );// if the condition is true then it prints the current number or prime numbers counted.
        return ;                    //and exits the function.
    }
    int is_prime = 1;                           // Assume secondnum is prime initially
    for (int i = 2 ; i*i <= secondnum ; i++)    // loop to check the prime number.
    {
        if (secondnum % i == 0)                
        {
            is_prime = 0;                        // If secondnum is divisible by i, then it's not prime
            break;
        }
    }
    if (is_prime) {
        count++;                                    // Increment count only if secondnum is prime
    }
    CountPrime(firstnum, secondnum-1, count);       // again call the recursive function with the value of secondnum = (secondnum-1).
}