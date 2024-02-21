/*Write the program code that displays n integers entered by the user in different arrays as positive and negative.
Example: If n:6; Input numbers: 1, -24, -2, 5, -5, 2
Positive numbers: 1, 5, 2
Negative numbers: -24, -2, -5.*/

/*Kullanıcı tarafından girilen n tane tam sayıdan pozitif ve negatif olarak farklı dizilerde gösteren program kodunu yazınız.
Örnek: n:6 ise; Girilen sayılar: 1, -24, -2, 5, -5, 2
Pozitif sayılar: 1, 5, 2 
Negatif sayılar: -24, -2, -5.*/

#include<stdio.h>
int main()
{
    int n;//this  variable will store the number of input numbers.
    printf("Enter the number of input you want to input in the array: ");//asking the use for the  amount of inputs they want to make.
    scanf("%d",&n);
    int positiveArray[n];//this array will hold all the pozitive integers.
    int negativeArray[n];//this array will hold all the negative integers.
    int number; //This variable will take each number from user as an integer.
    int positivecount = 0,negativecount = 0;//These variables will track the index of the numbers in positiveArray and negativeArray.
    for (int i=0 ;i < n ;i++)
    {
        printf("Enter the %d. (non zero) number: \n",i+1);
        scanf("%d",&number);
        if(number > 0)
        {
            positiveArray[positivecount] = number;
            positivecount++;//we increase the count everytime we find a positive number.
        }
        else
        {
            negativeArray[negativecount] = number;
            negativecount++;//we increase the count every time we find a negative number.
        }
    }
    printf("Positive numbers: \n");
    for (int j = 0 ;j < positivecount ;j++)//this loop will print the positive numbers .
    {
        printf("%d  ",positiveArray[j]);
    }
    printf("\nNegative numbers:\n");
    for (int k = 0 ;k < negativecount ;k++)//this loop will print the negative numbers .
    {
        printf("%d  ",negativeArray[k]);
    }        
    return 0;
}
