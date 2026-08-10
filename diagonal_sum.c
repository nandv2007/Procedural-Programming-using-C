#include <stdio.h>
int main(){
    int m;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&m);
    int a[m][m];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<m;i++){
        s+=a[i][i];
        if(i!=m-i-1){
            s+=a[i][m-i-1];
        }
}
printf("Sum of diagonals: %d \n",s);
return 0;
}