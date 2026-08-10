#include <stdio.h>
int main(){
    char str[1000];
    int freq[256]={0};
    int min=1000;

    printf("enter string:");
    scanf("%s", str);
    
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]<min){
            min=freq[i];
        }
    }
    printf("max= %d \n",min);
    for(int i;i<256;i++){
        if(freq[i]==min){
            printf("%c ",i);
        }
    }
    return 0;
}