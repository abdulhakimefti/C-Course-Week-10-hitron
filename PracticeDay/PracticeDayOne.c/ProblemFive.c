#include <stdio.h>
#include<string.h>
char string_concat(char a[],char b[]){
    int lenOfa = strlen(a);
    int lenOfb = strlen(b);
    for(int i = lenOfa-1,j=0;j<lenOfb;i++,j++){
        a[i] = b[j];
    }
}

int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    string_concat(a,b);
    printf("%s\n",a);
}