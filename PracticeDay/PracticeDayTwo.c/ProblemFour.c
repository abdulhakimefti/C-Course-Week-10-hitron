#include <stdio.h>
#include<string.h>
int  find_lastIndex(char str[],char c) {
    int len = strlen(str);
    int index = 0;
    for(int i =0;i<len;i++){
        if(str[i]==c){
            index = i;
        }
    }
   
    if(index!=0){
        return index;
    }
    else{
        return -1;
    }
}

int main()
{
    
    char str[100];
    scanf("%s",&str);
    char is = 'c';
    int rs =  find_lastIndex(str,is);
    printf("%d\n",rs);
    
}