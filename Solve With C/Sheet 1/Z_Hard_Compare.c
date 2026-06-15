#include <stdio.h>
#include <math.h>

int main()
{
    int a, c;
    long long int b, d;

    scanf("%d %lld %d %lld", &a, &b, &c, &d);

    double a_b = (double)b * log10((double)a);
    double c_d = (double)d * log10((double)c);

    if (a_b > c_d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}