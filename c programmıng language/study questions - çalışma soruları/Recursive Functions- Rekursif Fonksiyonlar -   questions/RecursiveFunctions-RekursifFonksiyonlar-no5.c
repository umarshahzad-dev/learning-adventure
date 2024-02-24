//Write the recursive function that finds the difference between the largest and smallest integers in a array of 10 integers.
//10 adet tam sayı olan bir dizi içerisindeki tam sayılardan en büyük sayı ile en küçük sayı arasındaki farkı bulan rekürsif fonksiyonu yazınız.

#include<stdio.h>

int FindMax(int array[], int max , int size);

int FindMin(int array[], int min, int size);

int main()
{
    int N = 10, array[N];

    for (int i = 0 ; i< N ; i++)
    {
        printf("Enter the %d. element of the array: ", i+1);
        scanf("%d",&array[i]);
    }

    printf("The array is : \n");
    for (int i = 0 ; i< N ; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\nThe difference between the largest and the smallest integer in the array is :%d\n", FindMax(array , array[0], N) - FindMin(array , array[0], N));

}

int FindMax(int array[], int max , int size)
{
    if (size == 0)  // base case if the size of array is 0 then returns the current max.
    {
        return max;
    }
    if(array[0] > max )// Check if the first element is larger than the current max
    {
        max = array[0];// Update max if a larger element is found
    }
    return FindMax( array + 1, max , size -1);// Recursively call the function with the remaining elements and updated max.
}

int FindMin(int array[], int min , int size)
{
    if (size == 0)      // base case if the size of array is 0 then returns the current min.
    {
        return min;
    }
    if(array[0] < min )// Check if the first element is smaller than the current max
    {
        min = array[0];// Update min if a smaller element is found
    }
    return FindMin( array + 1, min , size -1);// Recursively call the function with the remaining elements and updated min.
}