#include <stdio.h>
int main()
{
    int val = 42;
    int arr[99];
    for (int i = 0; i < 99; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==42){
            scanf("%d", &arr[i+1]);
            break;
        }
    }
    for (int i = 0; i < 99; i++)
    {
        if (arr[i] == 42)
        {
            break;
        }
        printf("%d\n", arr[i]);
    }
}