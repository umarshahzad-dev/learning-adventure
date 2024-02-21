//Find the smallest, largest and average number on an NxN matrix created from random numbers between 0-100.
// 0-100 arasındaki rastgele sayılardan oluşturulmuş bir NxN’lik bir matris üzerinde en küçük, en büyük ve ortalama sayıyı bulunuz.

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int N = 5; // Size of square matrix
    int matrix[N][N]; // Matrix to store random numbers.
    
    srand(time(NULL)); // Seed for rand().
    printf("Matrix:\n");
    for (int i=0 ;i<N ; i++) {
        for (int j=0 ; j<N ; j++) {
            matrix[i][j] = rand() % 101; // Generate a random number between 0 and 100.
            printf("%4d ",matrix[i][j]); // Print the number in the matrix.
        }
        printf("\n");// Move to next line after each row.
    }
    
    float sum = 0; // Variable to hold the sum of all elements in the matrix.
    float min = matrix[0][0], max = matrix[0][0]; // Initialize with first element of the matrix.
    
    /* Calculating the minimum and maximum values, as well as the sum of all elements in the matrix */
    for (int i=0 ;i<N ; i++) {
        for (int j=0 ; j<N ; j++ ) {
            if(min > matrix[i][j]) // If the current element is smaller than the stored smallest value...
                min = matrix[i][j]; // ...then update the smallest value.
            
            if(max < matrix[i][j]) // The same thing but for largest value.
                max = matrix [i][j];
            
            sum += matrix[i][j]; // Add the current element to the sum.
        }
    }
    
    float avg = sum / (N * N); // Calculate the average by dividing the sum by the amount of elements in the matrix.
    printf("Minimum value is :%.f",min);//prints the smallest value.
    printf("\nMaximum Value is :%.f",max);//Prints the largest value.
    printf("\nAverage value is :%.2f\n",avg);//prints the average.
    
    return 0;
}