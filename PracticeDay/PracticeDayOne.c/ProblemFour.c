#include <stdio.h>
#include<string.h>

char string_copy(char a[],char b[]){
    int len = strlen(a);
    for(int i =0;i<len;i++){
        b[i] = a[i];
    }
    // return b;    
}
int main()
{
    char str[100],strCpy[100];
    scanf("%s",&str);
    string_copy(str,strCpy);
    printf("%s\n",strCpy);

}