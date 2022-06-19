#include<stdio.h>

int change_array(int a[],int b[],int n){

    for(int i=n-1,j=0;i>=0;i--,j++){
        b[j] = a[i];
    }
  
}

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ch[n];

    change_array(arr,ch,n);

    for(int i =0;i<n;i++){
        printf("%d ",ch[i]);
    }
}