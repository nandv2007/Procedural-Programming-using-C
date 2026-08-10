#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the inner radius and outer radius of the ring: ");
    scanf("%d %d", &a, &b);
    int s=3.14*(b*b-a*a);
    printf("area: %d", s);
    int p=2*3.14*(a+b);
    printf("\nperimeter: %d", p);
    return 0;
}