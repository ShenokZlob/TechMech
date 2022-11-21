#include <stdio.h>

#define MAX_N 10
char sequence[MAX_N];
int CNT = 0;

void print_chars(int n)
{
    if (++CNT < 6) return;
    for (int i = 0; i < n; ++i)
        printf("%c", sequence[i]);
    printf("\n");
    return;
}

void gen(int i, int n, int k)
{
    if (i == n)
    {
        print_chars(n);
        return;
    }
    sequence[i] = '(';
    if (n - i >= k + 1)
        gen(i + 1, n, k + 1);
    sequence[i] = ')';
    if (k > 0)
        gen(i + 1, n, k - 1);
}

int main()
{
    gen(0, 8, 0);
    return 0;
}

/*
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()

*/