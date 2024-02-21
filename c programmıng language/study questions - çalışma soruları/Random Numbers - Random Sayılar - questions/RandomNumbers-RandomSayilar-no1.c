// Generate N random numbers in the range [0-100]. Regenerate the numbers that are smaller than the average so that they are larger than the average.
//N adet rastgele sayı [0-100] aralığında üretiniz. Ortalamadan küçük olan sayıları ortalamadan büyük olacak şekilde yeniden üretiniz.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int N;// hold the amount of number (N) user wants to generate.
    printf("How many random numbers you want to generate: \n");
    scanf("%d",&N);
    int numsArray[N]; //create an array with size N to store generated numbers.

    printf("Orignal Generated Numbers:\n" );
    float sum =0;//  this variable will be used for calculating average later on.
    for(int i = 0 ; i < N ; i++)
    {
        numsArray[i]= rand()%100 + 1; //generate a random number between 1 and 100.
        printf("%4d ",numsArray[i]); //print each orignal number in 4 spaces
        sum+=numsArray[i]; //add every number into sum variable.
    }
    printf("\naverage = %.2f\n",sum/N); //calculate the average by dividing sum by N

    for(int j = 0 ; j< N ; j++)
    {
        if (numsArray[j]<sum/N ) //Checks  if the current number is smaller than the average.
        {
            numsArray[j] =  (rand()%(100- (int)(sum/N) +1))+ (sum/N);// if the number is smaller it changes it into the number larger than the average.
        }
    }

    printf("Newly Generated Numbers: \n");

    for(int i = 0 ; i < N ; i++)
    {
        printf("%4d ",numsArray[i]); //print each  newly generated number in 4 spaces.
    }

}