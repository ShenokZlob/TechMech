#include <stdio.h>
#include <stdlib.h>

#define MAX_N 8

int permutation[MAX_N];
int cnt = 0;

void print(int n)
{
    cnt++;
}

int check(int p, int n)
{
    for (int i = 0; i < p; ++i)
    {
        if (permutation[i] == permutation[p])
            return 0;
        /* code here */
        if (abs(i - p) == abs(permutation[i] - permutation[p]))
            return 0;
    }
    return 1;
}

void gen(int i, int n)
{
    if (i == n)
    {
        print(n);
        return;
    }
    for (int j = 0; j < n; ++j)
    {
        permutation[i] = j;
        if (check(i, n))
            gen(i + 1, n);
    }
}

int main()
{
    gen(0, 6);
    printf("%d\n", cnt);
    return 0;
}
//4