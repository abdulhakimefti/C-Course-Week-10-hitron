#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        if(n%2 == 0){
            for(int j=0, k=n-1; j<k; j++, k--){
                printf("%d ", arr[j]);
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        else{
            int half = n / 2;
            for(int j=0, k=n-1; j<=half, k>half; j++, k--){
                printf("%d ", arr[j]);
                printf("%d ", arr[k]);
            }
            printf("%d\n", arr[half]);
        }
        
    }
    return 0;
}