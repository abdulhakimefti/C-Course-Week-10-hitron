#include<stdio.h>

int change_values(int ar[],int n,int l,int r){
    for(int i=0;i<n;i++){
        if(i>=l && i<=r){
            ar[i]=0;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int l,r;
    scanf("%d %d",&l,&r);
    change_values(ar,n,l,r);
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}