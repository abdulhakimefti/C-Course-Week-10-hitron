#include<stdio.h>
#include<string.h>
int swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
void sort(int n,int a[]){

        for(int steps=0;steps<n;steps++){
            int min = a[steps],pos = steps;
            for(int i =steps;i<n;i++){
                if(a[i]<min){
                    min = a[i];
                    pos =i;
                }
            }
            swap(&a[steps],&a[pos]);
        }
}
int main(){
    char s[100];
    scanf("%s",&s);
    int len =strlen(s);
    int arr[len/2+1];
    for(int i=0,j=0;i<len;i++){
        if(i%2==0){
            arr[j] = s[i] - '0';
            j++;
        }
    }
    
    sort(len/2+1,arr);
     
    for(int i=0,j=0;i<len;i++){
        if(i%2==0){
            s[i] = arr[j] + '0';
            j++;
        }
    }
    printf("%s\n",s);
}