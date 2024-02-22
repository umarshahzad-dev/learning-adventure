//Write the program code that writes which numbers are greater than/equal/less than the average among the 4 numbers entered from the keyboard.
//Example: 10, 5, 3, 12 Average: 7.5 => 10 and 12 will be written as greater than the average, and 3 and 5 will be written as smaller.
//Klavyeden girilen 4 sayıdan hangi sayıların ortalamadan büyük/eşit/küçük olduğunu yazan program kodunu yazınız. 
//Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan 10 ve 12 büyük, 3 ve 5 küçük olarak yazacaktır.

#include<stdio.h>

int main()
{
    int numbers[4];// store  the four numbers entered  by user in an array called "numbers"
    float avg;//variable  to hold the average of the numbers.

    for(int i = 0 ; i < 4 ; i++)// for loop will run 4 times as we are taking 4 numbers from user.
    {
        printf("Enter %d. number : ",i+1);
        scanf("%d",&numbers[i]);
    }

    avg = (numbers[0] + numbers[1] + numbers[2] + numbers[3]) / 4.0;//calculate  the sum of all numbers and divide it by 4 to get the average.
    printf("Average  is %.2f\n",avg);
    for (int j = 0 ; j < 4 ; j++)//for loop will print whether each number is greater than less than or equal to the average .
    {
        if (numbers[j] > avg)
            printf("%d is greater than average\n" , numbers[j]);
        else if (numbers[j] == avg)
            printf("%d is equal to average\n" , numbers[j]);
        else
            printf("%d is less than average\n" , numbers[j]);
    }
    
    return 0;
}

