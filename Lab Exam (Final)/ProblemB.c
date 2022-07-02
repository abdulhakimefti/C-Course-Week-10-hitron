#include<stdio.h>
#include<string.h>
int main(){
        char s[99];
        scanf("%s",&s);
        int len = strlen(s);
        
        int counter =0;
        for(int i =0;i<len;i++){
            if(s[i]=='a'){
                counter++;
            }
        }
        if(counter > (len/2) ){
            printf("%d\n",len);
        }
        else{
            int newLen = counter + (counter-1);
            printf("%d\n",newLen);
        }
        
}