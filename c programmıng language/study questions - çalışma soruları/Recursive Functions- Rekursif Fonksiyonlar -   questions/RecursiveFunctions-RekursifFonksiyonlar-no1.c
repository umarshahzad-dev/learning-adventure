//Write a recursive function that finds the largest number in an array of 10 integers.
// 10 adet tam sayı olan bir dizi içerisindeki en büyük sayıyı bulan rekürsif fonksiyonuyazınız.

#include<stdio.h>

int FindLargestNumber(int array[], int max ,int size);

int main()
{
    int N = 10;// Size of the array
    int array[N];// Declare an array with size N
    
    for (int i = 0 ; i < N; i++)// Get input for the array elements
    {
        printf("\nEnter the %d. number for array: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("The array  is : \n");
    for(int j=0;j<N;j++)// Print the array
    {
       printf("%d\t",array[j]);
    }
    printf("\nThe largest number in the array is: %d", FindLargestNumber(array, array[0], N));
   return 0;
}

int FindLargestNumber(int array[], int max , int size)// Function to find the largest number in an array
{
    if (size == 0)// Base case: If the array is empty, return the current max value
    {
        return  max ;
    }
    if(array[0] > max )// Check if the first element is larger than the current max
    {
        max = array[0];// Update max if a larger element is found
    }
    return FindLargestNumber( array + 1,max, size -1);// Recursively call the function with the remaining elements and updated max
}

