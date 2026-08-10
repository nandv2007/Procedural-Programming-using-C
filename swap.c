#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swapping: a=%d, b=%d", a, b);
    int c=a;
    a=b;
    b=c;
    printf("\nAfter swapping: a=%d, b=%d", a, b);
    return 0;
}