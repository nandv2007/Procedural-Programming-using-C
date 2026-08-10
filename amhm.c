#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int am=(a+b)/2;
    printf("Arithmetic mean: %d", am);
    int hm=2*a*b/(a+b);
    printf("\nHarmonic mean: %d", hm);
    return 0;
}