#include <stdio.h>
int main(){
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(s==n){
        printf("The number is a perfect number.\n");
    }
    else{
        printf("The number is not a perfect number.\n");
    }
    return 0;
}