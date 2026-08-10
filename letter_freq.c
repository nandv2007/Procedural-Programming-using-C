#include <stdio.h>
int main(){
    char str[100];
    int i=0,c;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i]!='\0'){
       c=1;
       while(str[i]==str[i+1]){
           c++;
           i++;
    }
    printf("%c%d",str[i],c);
    i++;
    }
    return 0;
}