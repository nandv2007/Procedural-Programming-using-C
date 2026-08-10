#include <stdio.h>
#include <string.h>
int main(){
    int m=0;
    int n;
    char arr[50];
    char result[50];
    printf("enter no of words:");
    scanf("%d",&n);
    printf("enter words:");
    for(int i=0;i<n;i++){
        scanf("%s",arr);
        if(strlen(arr)%2!=0 && strlen(arr)>m){
            m=strlen(arr);
            strcpy(result,arr);
        }
    }
    if(m==-1){
        printf("No odd-length word found.\n");
    }else{
        printf("Longest odd-length word: %s\n", result);
    }
    return 0;   

}
