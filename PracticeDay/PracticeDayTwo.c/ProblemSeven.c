#include<stdio.h>
int ultra_sum(int *a,int *b){
    int temp = *a;
    *a = *a + *b;
    *b = temp * *b;
}
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    ultra_sum(&a,&b);
    printf("%d %d\n",a,b);
}