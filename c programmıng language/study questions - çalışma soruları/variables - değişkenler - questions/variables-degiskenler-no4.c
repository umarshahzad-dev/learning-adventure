//Write the program code that converts the Kelvin (K) value entered into Fahrenheit according to the formula F= (K − 273.15) × 9/5 + 32.
//F= (K − 273.15) × 9/5 + 32 formülüne göre girilen Kelvin (K) değerine göre Fahrenheit’a çeviren program kodunu yazınız.

#include<stdio.h>

int main() {
    float K, F;

    printf("Enter the kelvin(K) value: ");
    scanf("%f", &K);

    F = (K - 273.15) * 9.0 / 5.0 + 32.0;

    printf("\nThe temperature in fahrenheit is %.2f ", F);
    return 0;
}

