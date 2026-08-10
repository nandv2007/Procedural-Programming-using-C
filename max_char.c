#include <stdio.h>
int main(){
    char str[1000];
    int freq[256]={0};
    int max=0;

    printf("enter string:");
    scanf("%999s", str);
    
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
        }
    }
    printf("max= %d \n",max);
    for(int i;i<256;i++){
        if(freq[i]==max){
            printf("%c ",i);
        }
    }
    return 0;
}