#include <stdio.h>
#include <string.h>
int main(){
    char st[50],st2[50]="";
    printf("Enter a string: ");
    scanf("%s", st);
    for(int i=0;i<strlen(st);i++){
        if(st[i]=='#'){
            strncat(st2,"#",1);
        }else{
            continue;
        }
    }
    for(int i=0;i<strlen(st);i++){
        if(st[i]!='#'){
            strncat(st2,&st[i],1);
        }else{
            continue;
        }
    }
    printf("String after moving # to front: %s\n", st2);
    return 0;
}
