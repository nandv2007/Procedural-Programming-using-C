#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    printf("Reversed number: %d \n", r);
    return 0;
}