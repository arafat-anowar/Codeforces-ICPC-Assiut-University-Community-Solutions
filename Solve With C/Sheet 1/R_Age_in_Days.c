#include <stdio.h>

int main()
{
    int n, years, months, days;

    scanf("%d", &n);

    years = n / 365;
    months = (n % 365) / 30;
    days = (n % 365) - (months * 30);

    printf("%d years\n%d months\n%d days", years, months, days);

    return 0;
}