#include <stdio.h>
int main(){
    int r,h;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%d %d", &r, &h);
    int s=2*3.14*r*h + 2*3.14*r*r;
    int v=3.14*r*r*h;
    printf("surface area: %d", s);
    printf("\nvolume: %d", v);
    return 0;
}