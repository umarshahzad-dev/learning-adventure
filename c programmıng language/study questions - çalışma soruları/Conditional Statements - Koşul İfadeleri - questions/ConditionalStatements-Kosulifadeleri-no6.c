//Write the program code that displays the type of triangle (Equilateral, Isosceles, Scalene) based on 3 integer values entered from the keyboard.
//Klavyeden girilen 3 tam sayı değerine göre üçgenin çeşidini (Eşkenar, İkizkenar, Çeşitkenar) ekrana yazan program kodunu yazınız.

#include<stdio.h>

int main()
{
    int firstside , secondside , thirdside;

    printf("Enter the length of the first side(integer) : ");
    scanf("%d", &firstside);
    printf("Enter the length  of the second side(integer): ");
    scanf("%d", &secondside);
    printf("Enter  the length of the third side(integer): ");
    scanf("%d" ,&thirdside );

    if (firstside == secondside && secondside == thirdside && thirdside == firstside)//checks if all  sides are equal
    {
        printf("\nIt is an equilateral triangle.");
    }
    else if ((firstside == secondside && secondside != thirdside) 
            || (secondside == thirdside &&  firstside != thirdside) 
            || (firstside == thirdside && firstside != secondside) )//checks if any two sides are equal and third side is not equal first two sides.
    {
        printf("\nIt is an  isosceles triangle");
    }
    else                                                // if no sides are equal prints  a scalene triangle
    {
        printf("\nIt is a  scalene triangle");
    }
    return 0 ;
}