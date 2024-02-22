//Write the program code that finds the average of 3 numbers entered from the keyboard.
//Klavyeden girilen 3 sayının ortalamasını bulan program kodunu yazınız. 

#include<stdio.h>

int main()
{
    int number;//store the number taken from user.
    int sum=0;//store the sum of the numbers.
    for (int i = 0 ; i<3 ; i++)//asking the user to enter a number and adding it to the sum until there are 3 numbers
    {
        printf("Enter the %d. number: \n",i+1);
        scanf("%d",&number);
        sum+=number;
    }
    printf("The average of the 3 numbers entered is :%.2f",(double)sum/3.0);//prints the average by dividing the sum by 3.
    return 0 ;
}