#include <stdio.h>

long long func(long long a, long long n)
{
    if (n == 0)
        return 0;
    if (n & 1) //n нечет
        return func(a, n & -2) + a;
    else
    {
        long long b = func(a, n >> 1); // n >> 1 === n / 2
        return b + b;
    }
}

int main(void)
{
    long long a, b; // 123 321
    //scanf("%lld %lld", &a, &b);
    a = 123; b = 321;
    printf("%lld\n", func(a, b));
    return 0;
}

//39483
//123 * 321