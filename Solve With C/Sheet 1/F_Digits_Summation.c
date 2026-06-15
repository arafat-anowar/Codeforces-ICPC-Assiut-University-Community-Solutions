#include <stdio.h>

int main()
{
    long long int n, m;
    int last_digit_sum;

    scanf("%lld %lld", &n, &m);

    last_digit_sum = n % 10 + m % 10;

    printf("%d", last_digit_sum);

    return 0;
}