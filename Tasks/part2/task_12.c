#include <stdio.h>

int foo(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0; *y = 1;
        return b;
    }
    int x1, y1;
    int d = foo(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return d;
}

int main(void)
{
    int a = 11, b = 13;
    int x, y;
    int res = foo(a, b, &x, &y);
    printf("%d %d %d", x, y, res);

    return 0;
}

//6 -5 1