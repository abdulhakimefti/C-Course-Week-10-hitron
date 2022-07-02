#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int l =n;
    for(int i= 0;i<n;i++){
        int mul =1;
      
        for(int j=0;j<n;j++){
      
            if(j<l){
                mul*=2;
               
            }
            else{
                mul+=k;
             
            }
            
        }
        arr[i]=mul;

        l--;
    }
   int z =9999999;
   for(int i =0;i<n;i++){
    if(z>arr[i]){
        z = arr[i];
    }
   }
   printf("%d\n",z);
    
}