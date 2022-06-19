#include<stdio.h>
#include<string.h>
int check_palindrome(char str[]){
    int len = strlen(str);
    int couter =0;
    for(int i=0,j=(len-1);i<=(len-1)/2;i++,j--){
        if(str[i]!=str[j]){
            couter++;
        }
    }
    return couter;
}

int main(){
    char str[100];
    scanf("%s",&str);
    int l = check_palindrome(str);
    printf("%d\n",l);
}