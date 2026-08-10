#include <stdio.h>
#include <string.h>
int main(){
    char n[20];
    printf("Enter a string:");
    scanf("%s",n);
    int l=0;
    int r=strlen(n)-1;
    int f=1;
    while(l<r){
        if(n[l]!=n[r]){
            f=0;
            break;
        }
        l++;
        r--;
    }
    if(f==1){
        printf("The string is a palindrome.\n");
    }
    else{
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
