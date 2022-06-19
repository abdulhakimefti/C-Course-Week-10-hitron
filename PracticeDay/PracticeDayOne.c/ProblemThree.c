#include <stdio.h>

int get_length(char str[]){
    int index = 0;
    while(str[index]!='\0'){
        index++;
    }
    index++;
    return index;
}

int main()
{
    char str[100];
    scanf("%s",&str);
    int l = get_length(str);
    printf("%d\n",l);   
}