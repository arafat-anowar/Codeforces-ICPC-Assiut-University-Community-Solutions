#include <stdio.h>

int main()
{
    int a, b, floor, ceil, round;

    scanf("%d %d", &a, &b);

    floor = a / b;
    ceil = (int)(((float)a / b) + 0.99);
    round = (int)(((float)a / b) + 0.5);

    printf("floor %d / %d = %d\n", a, b, floor);
    printf("ceil %d / %d = %d\n", a, b, ceil);
    printf("round %d / %d = %d\n", a, b, round);

    return 0;
}