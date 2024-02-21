//Reverse the string expression entered by the user and place it in a new string.
//Example: Str1: “abcde123” Result: Str2: “321edcba”
// Kullanıcı tarafından girilen string ifadeyi ters çevirip yeni bir diziye yerleştiriniz.
//Örnek: Str1: “abcde123” Sonuc: Str2:“321edcba”

#include<stdio.h>

int main()
{
    char str[50];
    int len = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[len]!='\0') //for calculating the length of the string without using strlen function.
    {
        len++;
    }
    len--;//to remove the space from end.
    printf( "The string you entered:%s",str);
    for (int i = 0 ; i < (len)/2 ; i++)//loop for reversing the string.
    {
        char temp  = str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("\nThe reversed string is : %s \n",str);//prints the reversed string.
    
    return 0;
}
