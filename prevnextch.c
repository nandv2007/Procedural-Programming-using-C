#include <stdio.h>
int main(){
    char ch;
    printf("Enter a charecter: ");
    scanf("%c", &ch);
    char prev=ch-1;
    char next=ch+1;
    printf("prev charecter: %c", prev);
    printf("\nnext charecter: %c", next);
    return 0;
}