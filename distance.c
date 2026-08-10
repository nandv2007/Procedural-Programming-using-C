#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    int distance = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between the points: %d", distance);
    return 0;
}