#include <stdio.h>

int main()
{
    float n;

    scanf("%f", &n);

    if (n - (int)n != 0)
    {
        printf("float %d %.3f", (int)n, n - (int)n);
    }
    else
    {
        printf("int %d", (int)n);
    }

    return 0;
}