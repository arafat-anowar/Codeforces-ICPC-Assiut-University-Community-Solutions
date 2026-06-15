#include <stdio.h>

int main()
{
    int a, b, c, d, a_b_c_d_mul;
    long long int a_b_l_2, c_d_l_2;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    a_b_l_2 = ((long long int)a * b) % 100;
    c_d_l_2 = ((long long int)c * d) % 100;
    a_b_c_d_mul = a_b_l_2 * c_d_l_2;

    printf("%d%d", (a_b_c_d_mul / 10) % 10, a_b_c_d_mul % 10);
    
    return 0;
}