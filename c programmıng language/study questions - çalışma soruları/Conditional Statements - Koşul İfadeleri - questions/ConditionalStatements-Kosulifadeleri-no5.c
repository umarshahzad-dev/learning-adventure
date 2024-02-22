/*The salary of staff in a company is calculated as follows. Write the program code that calculates 
the total salary based on the salary information entered from the keyboard and the number of parts produced.
If the number of parts produced is between 50-100, 20% of the salary
If the number of parts produced is between 100-150, 25% of the salary
If the number of parts produced is between 150-200, an additional salary of 30% of the salary is paid.
Example: If Salary: 3000, Number of Pieces: 120, then: Total salary will be: 3750.
Bir şirkette personelin maaşı aşağıdaki şekilde hesaplanmaktadır. 
Klavyeden girilen maaş bilgisi ve üretilen parça sayısına göre toplam maaşı hesaplayan program kodunu yazınız.
Üretilen parça sayısı 50-100 arasında ise maaşın %20 
Üretilen parça sayısı 100-150 arasında ise maaşın %25 
Üretilen parça sayısı 150-200 arasında ise maaşın %30 kadar ek maaş ödemesi yapılmaktadır.
Örnek: Maaş: 3000, Parça sayısı: 120 ise bu durumda: Toplam maaş: 3750 olacaktır.*/

#include<stdio.h>

int main()
{
    int salary, pieces;
    
    printf("Enter salary: ");
    scanf("%d", &salary);
    
    printf("Enter number of pieces: ");
    scanf("%d", &pieces);
    
    if(pieces >= 50 && pieces <= 100)// checks if the  number of pieces is between 50 and 100
        printf("Total salary: %.2f\n", salary + (salary * 0.2));
    else if(pieces > 100 && pieces <= 150)//  checks if the number of pieces is greater than 100 and less or equal to 150.
        printf("Total salary: %.2f\n", salary + (salary * 0.25));
    else if(pieces > 150 &&  pieces <= 200)// checks  if the number of pieces is between 150 and 200
        printf("Total salary: %.2f\n", salary + (salary * 0.3));

    return 0 ;
}
