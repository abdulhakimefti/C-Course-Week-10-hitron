#include <stdio.h>

int take_input(int arr[],int n){
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    take_input(arr,n);
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

}