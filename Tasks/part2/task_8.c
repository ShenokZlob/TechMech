#include <stdio.h>

int foo(int a, int b)
{
    return b ? foo(b, a % b) : a;
}

int main()
{
    int a = 125;
    int b = 35;
    printf("%d\n", foo(a, b));
    return 0;
}

//5