#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int mul;
    scanf("%d", &mul);
    bool isMul = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int ml = ar[i] * ar[j];
                if (ml == mul)
                {
                    isMul = 1;
                    break;
                }
            }
        }
    }
    if (isMul)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}