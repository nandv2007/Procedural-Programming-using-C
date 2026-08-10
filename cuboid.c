#include <stdio.h>
int main(){
    int l,b,h;
    printf("Enter the length, breadth and height of the cuboid: ");
    scanf("%d %d %d", &l, &b, &h);
    int s=2*(l*b + b*h + h*l);
    printf("surface area: %d", s);
    int v=l*b*h;
    printf("\nvolume: %d", v);
    return 0;
}