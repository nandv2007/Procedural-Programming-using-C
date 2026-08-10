#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Boundary traversal of the matrix:\n");
    for(int i=0;i<m;i++){
        printf("%d ",a[0][i]);
    }for(int i=1;i<m;i++){
        printf("%d ",a[i][m-1]);
    }for(int i=n-2;i>=0;i--){
        printf("%d ",a[m-1][i]);
    }for(int i=m-2;i>0;i--){
        printf("%d ",a[i][0]);
    }
    return 0;
}