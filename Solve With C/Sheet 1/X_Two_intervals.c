#include <stdio.h>

int main()
{
    int l_1, l_2, r_1, r_2;

    scanf("%d %d %d %d", &l_1, &r_1, &l_2, &r_2);

    if (r_1 < l_2 || r_2 < l_1)
    {
        printf("-1");
    }
    else if (l_1 <= l_2 && r_1 <= r_2)
    {
        printf("%d %d", l_2, r_1);
    }
    else if (l_1 >= l_2 && r_1 >= r_2)
    {
        printf("%d %d", l_1, r_2);
    }
    else if (l_1 <= l_2 && r_1 >= r_2)
    {
        printf("%d %d", l_2, r_2);
    }
    else if (l_1 >= l_2 && r_1 <= r_2)
    {
        printf("%d %d", l_1, r_1);
    }
    
    return 0;
}