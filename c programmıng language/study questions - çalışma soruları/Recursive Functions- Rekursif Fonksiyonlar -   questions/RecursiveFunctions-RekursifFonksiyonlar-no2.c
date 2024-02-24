//Write the recursive function that finds the 2nd largest number in an array of 10 integers.
// 10 adet tam sayı olan bir dizi içerisindeki en büyük 2. sayıyı bulan rekürsif fonksiyonu yazınız.

#include<stdio.h>

int N = 10;// making a global variable to store the size of array.

int SecondLargestNum(int array[], int largest , int secondLargest, int size);

int main()
{
    int array[N];

    for (int i = 0 ; i < N ; i++)// get the elements of the array from user.
    {
        printf("Enter the %d. number for the array: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("The array is :\n");
    for (int j = 0 ; j < N ; j++)// prints array.
    {   
        printf("%d\t ",array[j]);
    }

    printf("\nThe second largest number in the array is:%d",SecondLargestNum(array , array[0], array[0], N));// prints the second largest value in array.

    return 0;
}

int SecondLargestNum(int array[] , int largest , int secondLargest, int size)// function to find the second largest value.
{
    if (size == 0)
    { 
        
        return secondLargest;
    }
    if (array[0]> largest)// if the first element of the array is larger then the current .
    {
        secondLargest = largest ;// sets the current largest value to second largest variable.
        largest = array[0];  // and sets the first element of the array to the variable largest.
    }
    if (array[0] > secondLargest && array[0] < largest) // checks if the first elemet of the array is larger than current secondlargest and smaller than current largest .
    {
        secondLargest = array[0];// if yes then sets the value of the first element of the array to secondlargest variable.
    }
    return SecondLargestNum( array +1 , largest , secondLargest, size-1 );// call the recursive function again.
}