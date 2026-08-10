#include <stdio.h>
#include <string.h>
int main(){
    char n[20];
    printf("Enter a number:");
    scanf("%s",n);
    int len=strlen(n);
    printf("Reversed number: ");
    for(int i=len-1;i>=0;i--){
        printf("%c",n[i]);
    }
    printf("\n");
    return 0;
}
