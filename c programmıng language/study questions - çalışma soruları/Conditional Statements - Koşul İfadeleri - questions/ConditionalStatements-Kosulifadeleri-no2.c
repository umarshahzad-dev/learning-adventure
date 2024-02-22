//Write a C program that calculates the final grade of a student based on the midterm 1, midterm 2, and final exam scores entered from the keyboard. 
//If the final grade is more than 50, print "PASSED"; if it's less, calculate the final grade again based on the midterm 1, midterm 2, and makeup exam scores. 
//If the final grade is less than 50 after recalculation, print "FAILED"; if it's more, print "PASSED". 
//Midterm 1 has a weight of 30%, midterm 2 has a weight of 30%, and the final exam has a weight of 40% in determining the final grade.
//Klavyeden girilen Vize1, Vize2 ve Final notlarına göre öğrencinin yıl sonu notunu hesaplayan 50 puandan fazla ise “GEÇTİ”, 
//küçük ise Vize1, Vize2 ve Bütünleme notlarına göre tekrar yıl sonu notunu hesaplayan 50 puandan az ise “KALDI”, 
//fazla ise “GEÇTİ” olarak ekrana yazan C programını yazınız. Vize1: %30, Vize2: %30, Final: %40 yıl sonuna etki edecek şekilde hesaplanacaktır.

#include<stdio.h>

int main()
{
    int midterm1, midterm2, final, makeup ; 
    float total= 0 ;

    printf("Enter your midter1 marks: ");
    scanf("%d", &midterm1);
    
    printf("\nEnter your midterm2 marks: ");
    scanf("%d", &midterm2);

    printf("\nEnter your final exam marks: ");
    scanf("%d",&final);

    total = midterm1*0.3 + midterm2*0.3 + final *0.4;

    if (total >= 50)
    {
        printf("Your total grade is %.2f\n", total);
        printf("PASSED");
    }
    else
    {
        printf("Enter  the your make up test mark: ");
        scanf("%d", &makeup);
        total = midterm1*0.3 + midterm2*0.3 + makeup *0.4;
        if (total >= 50)
        {
            printf("Your total grade is %.2f\n", total);
            printf("PASSED");
        }
        else
        {
            printf("Your total grade is %.2f\n", total);
            printf("Failed");
        }
    }
    return  0;
}