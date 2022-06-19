#include <stdio.h>
#include<string.h>
int find_firstIndex(char str[],char c) {
    int len = strlen(str);
    for(int i =0;i<len;i++){
        if(str[i]==c){
            return i;
        }
    }
    return -1;
}

int main()
{
    
    char str[100];
    scanf("%s",&str);
    char is = 'c';
    int rs = find_firstIndex(str,is);
    printf("%d\n",rs);
    
}