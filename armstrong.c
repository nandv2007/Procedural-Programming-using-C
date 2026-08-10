#include <stdio.h>
#include <math.h>
int main(){
    int n,m,y,s=0,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    y=n;
    while(m>0){
        c++;
        m/=10;
    }
    while(y>0){
        s+=pow(y%10,c);
        y/=10;
    }
    if(s==n){
        printf("The number is an armstrong number.\n");
    }
    else{
        printf("The number is not an armstrong number.\n");
    }
}