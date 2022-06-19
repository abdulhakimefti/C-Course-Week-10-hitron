#include<stdio.h>

float make_sum(float a,float b){
    float sum = a + b;
    return sum;
}
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float sum = make_sum(a,b);
    printf("%.2f\n",sum);
}