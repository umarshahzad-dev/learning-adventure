/*     Obtain a triangle in the figure below using * recursive function.
      *
     ***
    *****
   *******
  *********      */
/*     Aşağıdaki şekli * rekürsif fonksiyon kullanarak üçgen elde ediniz.
     *
    ***
   *****
  *******
 *********          */

#include <stdio.h>

void  printPattern(int n , int x);

int main()
{
    int n ; 

    printf("Enter the number of rows you want: ");
    scanf("%d", &n);

    printPattern( n , n ) ;   // Function call, with  n as the parameter , 1 n for rows and 1 n to help print spaces.

    return 0;
}

// Recursive Function to print stars.
void printPattern(int n , int x)
{

    if (n <= 0)                  //checks if the value of n is 0  or negative, then it stops recursion
    {
        return;
    }
    printPattern(n - 1 , x);      //recursively calls itself with n decreased by 1 and same x
        

    for (int i = 0 ; i < x-n ; i++)  // prints spaces according to the difference between x and n.
    {
        printf(" ");         
    }
    
    for (int i = 0 ; i < n*2-1 ; i++)  //prints stars according to the current iteration of loop
    {
            printf("*");         
    } 
    printf("\n");


}
