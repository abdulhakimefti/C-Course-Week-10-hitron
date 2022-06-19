#include <stdio.h>
#include<string.h>
int get_sum(int a[]){
    int sum = 0;
    int len = 10;
    for(int i =0;i<len;i++){
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int arr[10] ={4,5,12,4,53,32,4,5,3,5};
    int sum = get_sum(arr);
    printf("%d\n",sum);
}