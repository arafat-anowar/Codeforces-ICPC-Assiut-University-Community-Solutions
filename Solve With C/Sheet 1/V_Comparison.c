#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '>':
        (a > b) ? printf("Right") : printf("Wrong");
        break;
    case '<':
        (a < b) ? printf("Right") : printf("Wrong");
        break;
    case '=':
        (a == b) ? printf("Right") : printf("Wrong");
        break;
    }

    return 0;
}