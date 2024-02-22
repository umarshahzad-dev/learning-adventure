//In a parallel circuit with 3 resistors, the equivalent resistance is 1/Resh = 1/R1 + 1/R2 + 1/R3. Find the resh value. You can get R1, R2, R3 integers.
//3 dirençli paralel bir devrede eş değer direnç 1/Reş =1/R1 + 1/R2 + 1/R3 şeklinde bulunmaktadır. Reş değerini bulunuz. R1, R2, R3 tam sayı alabilirsiniz.

#include<stdio.h>

int main()
{
    int R1,R2,R3;
    float Resh;

    printf("Enter the value of  R1: ");
    scanf("%d",&R1);
    
    printf("\nEnter the value of  R2: ");
    scanf("%d",&R2);

    printf("\nEnter the value of  R3: ");
    scanf("%d",&R3);
    Resh = (float)(R1*R2*R3)/(R2*R3+R1*R3+R1*R2);
    printf("\nThe value of Resh is :%.2f",Resh);
    return 0;
}