#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    switch ((x / 1000) % 2)
    {
    case 0:
        printf("EVEN");
        break;

    case 1:
        printf("ODD");
        break;
    }

    return 0;
}