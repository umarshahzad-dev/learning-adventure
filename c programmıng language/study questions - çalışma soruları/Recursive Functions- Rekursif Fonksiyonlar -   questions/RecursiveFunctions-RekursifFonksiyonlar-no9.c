//Write a recursive function that checks if the number of integers in a given sequence is greater than the previous number and tells you how many such sequences there are.
//Example: 1, 5, 7, 19, 14, 4, 8, 5 => Result: 4. 5>1, 7>5, 19>7, 8>4
//verilen bir dizi içerisindeki tam sayılardan sayının bir önceki sayıdan büyük olması durumunu kontrol edip kaç tane böyle bir dizilim olduğu söyleyen rekürsif fonksiyon yazınız.
//Örnek: 1, 5, 7, 19, 14, 4, 8, 5 => Sonuc: 4 olacaktır. 5>1, 7>5, 19>7, 8>4

#include<stdio.h>

int sequence(int array[], int size , int count);

int main()
{
    int n;
    printf("Enter the number of elements you want in array: ");  // asks the user how many elements they want in the array.
    scanf("%d", &n);
    
    int array[n];  // set  the number of elements in an array according to user's input.
    ;
    for(int i=0; i < n ; i++)  // loop  through each element in the array and ask user for its value.
    {
        printf("\nEnter the %d. number :\n", i+1);
        scanf("%d",&array[i]);
    }

    printf("The array is : \n"); // prints the array.
    for(int j = 0;j < n; j++)
    {
        printf("%d \t",array[j]);
    }

    printf("\nThere are %d number that are greater then the previous number.", sequence(array, n, 0));  // prints the result .

    return 0 ; 
}

int sequence(int array[], int size , int count)    // function that checks if a number is greater than previous numbers or not.
{

    if (size == 0)  // when the size is equal to 0 returns the value of count.
    {
        return count -1 ;
    }
    else
    {
        if (array[0] < array[1]) // checks if the element is greater then the previous element .
        {
            count++; // incriment  the count by one.
        }
        return  sequence(array + 1, size -  1,count);  // calls itself with a shifted pointer and decrement the size.
    }
    

}