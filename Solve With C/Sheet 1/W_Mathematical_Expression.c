#include <stdio.h>

int main()
{
    int a, b, c;
    long long int ans;
    char op, eq;

    scanf("%d %c %d %c %lld", &a, &op, &b, &eq, &ans);

    switch (op)
    {
    case '+':
        ((long long int)a + b == ans) ? printf("Yes") : printf("%lld", (long long int)a + b);
        break;
    case '-':
        (a - b == ans) ? printf("Yes") : printf("%d", a - b);
        break;
    case '*':
        ((long long int)a * b == ans) ? printf("Yes") : printf("%lld", (long long int)a * b);
        break;
    }

    return 0;
}