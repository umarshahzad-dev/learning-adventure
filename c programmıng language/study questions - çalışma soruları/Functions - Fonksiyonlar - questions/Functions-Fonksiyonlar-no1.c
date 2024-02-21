/*Write a function that finds the rank of the element given as a parameter in a given int array (or returns -1).
int array[8]={1, 2, 5, 12, 20, 50, 4, 30};
int Element_Index_Find(int array[], int searched);
If the searched number is 5; Result: 3 will be returned.*/
/* Verilen bir int dizi içerisinden parametre olarak verilen elemanın kaçıncı sırada olduğunu bulan (yoksa -1 döndüren) fonksiyonu yazınız. 
int dizi[8]={1, 2, 5, 12, 20, 50, 4, 30}; 
int Eleman_Index_Bul(int dizi[], int aranan); 
aranan 5 ise; Sonuc: 3 dönecektir.*/

#include <stdio.h>

int Element_Index_Find(int *array, int size, int searched);

int main() 
{
    int array[8] = {1, 2, 5, 12, 20, 50, 4, 30};
    int searched;

    printf("Enter a number to search in the array:\n");
    scanf("%d", &searched);

    int result = Element_Index_Find(array, 8, searched); // store the result  of function call into variable "result"

    if (result == -1) 
    {
        printf("The element was not found in the array.\n");
    } else 
    {
        printf("The element %d was found at rank %d in the array.\n", searched, result);
    }

    return 0;
}

int Element_Index_Find(int *array, int size, int searched) 
{
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == searched) //  If we find the element, we return its index.
        {
            return i+1;
        }
    }
    return -1; // return  -1 if the element does not exist in the array.
}