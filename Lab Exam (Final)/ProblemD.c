#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int swap (int *a,int *b){
    int temp = *b;
    *b = *a;
    *a =   temp;
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
    int n,m;
    scanf("%d %d",&n,&m);
    int price[n];
    for(int i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    sort(n,price);
    int sum=0;
    for(int i=0;i<m;i++){
    if(price[i]<0){
          sum-=price[i];
    }
    }
    printf("%d\n",abs(sum));
}