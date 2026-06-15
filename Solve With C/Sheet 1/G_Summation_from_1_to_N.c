#include <stdio.h>

int main()
{
    int n;
    long long int sum_1_n;

    scanf("%d", &n);

    sum_1_n = ((long long int)n * (n + 1) / 2);

    printf("%lld", sum_1_n);

    return 0;
}