#include<stdio.h>
#include<stdbool.h>

bool check_array(int arr[],int n){
    int counter = 0;
    for(int i =1;i<=n;i++){
        for(int j =0;j<n;j++){
            if(arr[j]==i){
                counter++;
            }
        }
    }
    if(counter == n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool result = check_array(arr,n);
    if(result == 1){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}