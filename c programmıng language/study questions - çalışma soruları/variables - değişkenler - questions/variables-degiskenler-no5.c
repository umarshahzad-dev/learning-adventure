//Write C code that calculates the sum of three different integers entered from the keyboard, using only 2 variables. Variables: int total, number. No other variables will be used.
// Klavyeden girilen üç farklı tam sayının toplamını sadece 2 değişken kullanarak gerçekleştiren C kodunu yazınız. Değişkenler: int toplam, sayı şeklinde. Başka değişken kullanılmayacaktır.

#include<stdio.h>

int main()
{
    //this is the first approch  to solve this problem, because the topic is about variables thats why i am using this approch.
    int number, total = 0 ;
    printf("Enter the first integer: ");
    scanf("%d", &number);
    total += number;
    printf("Enter the second integer: ");
    scanf("%d", &number);
    total += number;
    printf("Enter the third integer: ");
    scanf("%d", &number);
    total += number;
    printf("Total is :%d",total);
    
    //this is the second approch to solve the problem with loops ,
    
    // for(int i=1;i<=3;i++)
    // {
    //     printf("Enter the %d. integer: ",i);
    //     scanf("%d",&number);
    //     total+=number;
    // }
    // printf("Total is:%d",total);

    return 0;

}