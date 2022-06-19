#include <stdio.h>

int get_min(int a ,int b){
    if(a<b) return a;
    else return b;
}
int main()
{
    int a ,b;
    scanf("%d %d",&a,&b);
    int l = get_min(a,b);
    printf("%d\n",l);

}