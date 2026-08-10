#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)){
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for(int i = 0; i < strlen(str1); i++){
        int found = 0;
        for(int j = 0; j < strlen(str2); j++){
            if(str1[i] == str2[j]){
                found = 1;
                str2[j] = '*';
                break;
            }
        }
        if(!found){
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}