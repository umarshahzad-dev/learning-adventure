//Write the program code that shows whether a right triangle can be drawn with 3 sequential integers entered from the keyboard. It must satisfy the condition A^2 + B^2 = C^2. 
//Example: When A=3, B=4, C=5 (numbers are entered sequentially) are entered, the result should read "RIGHT TRIANGLE CAN BE DRAWED"
// Klavyeden girilen sıralı 3 tam sayı ile dik üçgen çizilip çizilemeyeceğini gösteren program kodunu yazınız. A^2 + B^2 = C^2 şartını sağlamalıdır. 
//Örnek: A=3, B=4, C=5 (sayılar sıralı girilmiştir) girildiğinde sonuç “DİK ÜÇGEN ÇİZİLEBİLİR” yazmalıdır

#include<stdio.h>

int main()
{
    int  a,b,c;
    printf("Enter the value  of A : ");
    scanf("%d",&a);
    
    printf("\nEnter the value of B : ");
    scanf("%d",&b);
    
    printf("\nEnter the  value of C : ");
    scanf("%d",&c);

    if (c*c == (a*a)+(b*b))
    {
        printf("RIGHT TRIANGLE CAN BE DRAWEN");
    }
    else
    {
        printf("RIGHT TRIANGLE CANNOT BE DRAWEN");
    }

    return 0;
}