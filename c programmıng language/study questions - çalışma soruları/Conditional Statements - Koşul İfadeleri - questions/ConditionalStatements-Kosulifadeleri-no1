//Write the C code that gives a raise of 50% if the employee is 1, 30% if they are 2, 20% if they are 3,
// and 10% if they are 4, with the help of switch/case. Example: Salary: 4000 TL, round 2 => increased salary: 5200 TL
//Personel türüne göre 1 ise %50, 2 ise %30, 3 ise %20, 4 ise %10 zam yapan C kodunu switch/case yardımıyla yazınız. 
// Örnek: Maas:4000 TL, tur 2 => zamlı maas : 5200 TL

#include<stdio.h>
int main()
{
    int employee; 
    float salary, raisedsalary;
    printf("Enter Employee ID (1/2/3/4): ");
    scanf("%d", &employee);
    printf("Enter Your Salary: ");
    scanf("%f",&salary);

    switch (employee)
    {
    case 1 :
        raisedsalary = salary*0.5 + salary;
        break;
    case 2 :
        raisedsalary = salary*0.3 + salary;
        break;
    case 3 :
        raisedsalary = salary*0.2 + salary;
        break;
    case 4 :
        raisedsalary = salary*0.1 + salary;
        break;
    default:
        printf("Invalid Employee ID");
        break;
    }
    printf("\nYour Raised Salary is: %.2f\n",raisedsalary);
    return 0;
}
