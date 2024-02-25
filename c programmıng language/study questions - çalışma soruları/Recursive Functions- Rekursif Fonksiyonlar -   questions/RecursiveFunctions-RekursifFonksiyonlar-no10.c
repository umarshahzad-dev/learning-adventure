/* Obtain the figure below using * recursive function.
*
***
*****
*******
*********      */
/* Aşağıdaki şekli * rekürsif fonksiyon kullanarak elde ediniz.
*
***
*****
*******
*********      */

#include<stdio.h>

void  printPattern(int n);

int main()
{
    int n ; 

    printf("Enter the number of rows you want: ");
    scanf("%d", &n);

    printPattern( n ) ;   // Function call

    return 0;
}

// Recursive Function to print stars.
void printPattern(int n)
{
    
    if (n <= 0)                   // when the rows are equal or less then 0 , it will stop recursion
        return;
        
    else 
    {
        printPattern(n - 1);              // calling itself with n-1 which is decremented in each level of recursion 

    
        for (int i = 0 ; i < n*2-1 ; i++)      // for loop to print the stars  in each row
        {
            printf("*");         
        }    
        printf("\n");
    }
}
