#include <stdio.h>
#include<stdlib.h>

int get_max(int a,int b){
    int m = (a+b+abs(a-b))/2;
    return m;
}
int main()
{
   int a ,b;
   scanf("%d %d",&a,&b);
   int max = get_max(a,b);
    printf("%d\n",max);
}