#include <stdio.h>
int main(){
    int f;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &f);
    float c=(f-32)*5/9;
    printf("The temperature in Celsius is: %.2f", c);
    float k=c+273.15;
    printf("\nThe temperature in Kelvin is: %.2f", k);
    return 0;
}