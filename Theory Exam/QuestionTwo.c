#include<stdio.h>

float make_average(int arr[],int n){
    float total =0;
    for(int i= 0;i<n;i++){
        total+=arr[i];
    }
    float avg = total/n;
    return avg;
}

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float avg = make_average(arr,n);
    printf("%.2f\n",avg);
}