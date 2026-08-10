#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int sum=a[0];
    for(int i=1;i<n;i++){
        if(sum+a[i]>a[i]){
            sum+=a[i];
        }else{
            sum=a[i];
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("Maximum subarray sum: %d\n", max);
    return 0;
}