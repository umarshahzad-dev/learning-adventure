//Write the program code that calculates the student's final grade according to the Midterm1, Midterm2 and Final grades entered from the keyboard.
//Midterm1: 30%, Midterm2: 30%, Final: 40% will be calculated to affect the end of the year.
//Example: Midterm1=10, Midterm2=20, Final:60, Result:33

// Klavyeden girilen Vize1, Vize2 ve Final notlarına göre öğrencinin yıl sonu notunu hesaplayan program kodunu yazınız. 
//Vize1: %30, Vize2: %30, Final: %40 yıl sonuna etki edecek şekilde hesaplanacaktır. 
//Örnek: Vize1=10, Vize2=20, Final:60, Sonuc:33 

#include<stdio.h>

int main()
{
    int Midterm1, Midterm2 , Final;
    
    printf("Enter your Midterm1 mark : ");
    scanf("%d", &Midterm1);// take the  input from user for Midterm1 mark.
    
    printf("\nEnter your Midterm2 mark : ");
    scanf("%d", &Midterm2);//  take the  input from user for Midterm2 mark.
    
    printf("\nEnter your Final mark : ");
    scanf("%d",&Final);//  take the  input from user for Final mark.
    
    float result = (Midterm1*0.3 + Midterm2*0.3 + Final*0.4);//calculate the result and store the result in the result variable.
    printf("\nYour Result is %.2f",result);
    
    return 0;
}