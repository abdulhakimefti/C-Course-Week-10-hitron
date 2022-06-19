#include<stdio.h>

int get_min_max(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main (){
    int a ,b;
    scanf("%d %d",&a,&b);
    get_min_max(&a,&b);
    printf("%d %d\n",a,b);
}