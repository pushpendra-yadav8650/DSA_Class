#include <stdio.h>
int main()
{
    int g[100];
    int n, i, temp;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("Enter the number reverse :");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &g[i]);
    }
    for (i = 0; i <= n / 2; i++)
    {
        temp = g[i];
        g[i] = g[n - i - 1];
        g[n - i - 1] = temp;
    }
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", g[i]);
    }
}