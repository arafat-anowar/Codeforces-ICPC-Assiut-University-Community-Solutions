#include <stdio.h>

int main()
{
    int x, y, sub;
    long long int sum, mul;

    scanf("%d %d", &x, &y);

    sum = (long long int)x + y;
    mul = (long long int)x * y;
    sub = x - y;

    printf("%d + %d = %lld\n%d * %d = %lld\n%d - %d = %d", x, y, sum, x, y, mul, x, y, sub);

    return 0;
}