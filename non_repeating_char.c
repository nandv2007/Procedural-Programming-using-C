#include <stdio.h>
#include <string.h>
int non_repeating_char(char *str){
    char chars[256]={0};
    for(int i=0;i<strlen(str);i++){
        chars[(int)str[i]]++;
    }
    for(int i=0;i<strlen(str);i++){
        if(chars[(int)str[i]]==1){
            printf("%c ",str[i]);
            return (char)chars[str[i]];
        }
    }
    return -1;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int result=non_repeating_char(str);
    if(result==-1){
        printf("No non-repeating character found.\n");
    }
    return 0;
}

