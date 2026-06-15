#include <stdio.h>

int main()
{
    char x;

    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
    {
        printf("ALPHA\n");
        (x >= 'A' && x <= 'Z') ? printf("IS CAPITAL") : printf("IS SMALL");
    }
    else
    {
        printf("IS DIGIT");
    }

    return 0;
}