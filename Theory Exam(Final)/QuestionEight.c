#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2;
    for (int i = 1; i < n * 2; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = i; j > k; j--)
            {
                printf("*");
            }
            k += 2;
        }
        printf("\n");
    }
}