#include <stdio.h>
#include <string.h>
int main(){
    char n[20];
    int s=0;
    printf("Enter a number:");
    scanf("%s",n);
    for(int i=0;n[i]!='\0';i++){
        s+=n[i]-'0';
    }
    printf("Sum of digits: %d \n",s);
    return 0;
}