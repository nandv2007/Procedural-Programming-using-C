#include <stdio.h>
int main(){
    int u,a,t;
    printf("Enter initial velocity, acceleration and time: ");
    scanf("%d %d %d", &u, &a, &t);
    int s=u*t + 0.5*a*t*t;
    int v=u+a*t;
    printf("distance: %d", s);
    printf("\nfinal velocity: %d", v);
    return 0;
}