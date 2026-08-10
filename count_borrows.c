#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    int b=0;
    while(n1>n2){
        if(n1%10<n2%10){
            b++;
            n1=n1/10-1;
            n2/=10;
        }else{
            n1/=10;
            n2/=10;
        }
    }
    printf("Number of borrows: %d\n", b);
    return 0;
}