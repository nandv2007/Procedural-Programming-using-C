#include <stdio.h>
int main(){
    int n,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d",&k);
    k=k%n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=a[i];
    }
    printf("Array after rotation: ");
    for(int i=0;i<n;i++){
            printf("%d ",temp[i]);
    }
    return 0;
}
    