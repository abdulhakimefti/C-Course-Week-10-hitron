#include<stdio.h>
#include<string.h>
int count_zero(char byWoman[]){
    int len = strlen(byWoman);
    int counter =0;
    for(int i =0;i<len;i++){
        if(byWoman[i]=='0'){
            counter++;
        }
    }
    return counter;
}

int main(){
    char byWoman[100];
    scanf("%s",&byWoman);
    int n = count_zero(byWoman);
    printf("%d\n",n);
}