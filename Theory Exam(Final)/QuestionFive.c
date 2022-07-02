#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char str[1000];
    scanf("%s",&str);
    int len = strlen(str);
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    for(int i=0;i<len;i++){
        if(str[i]>= '0' && str[i] <= '9'){
            arr[str[i]-'0'] = str[i]-'0'; 
        }   
    }
    bool allDigit = 1;
    for(int i=0;i<10;i++){
       if(i!=arr[i]){
        allDigit=0;
        break;
       }
    }
    if(allDigit){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}