#include <stdio.h>

int mul(int a, int b);

int main(void)
{
    int a = 10;
    int b = 20;
    int result = mul(a, b);

    printf("%d * %d = %d\n", a, b, result);
    return 0;
}
