#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int swap (int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void sort(int n,int a[]){
    for(int steps = 0;steps<n;steps++){
        for(int i =0;i<n;i++){   
            if(a[i]>a[i+1]){
                swap(&a[i],&a[i+1]);
            }
        }
    }

}
int main(){
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j =0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        sort(n,arr);
        int d =99999999;
        for(int j=0;j<n;j++){
            int e = arr[j+1] - arr[j];
            if(e<d){
                d=e;
            }
        }
        printf("%d\n",d);
    }
}
