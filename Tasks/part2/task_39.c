#include <stdio.h>
#include <stdlib.h>

#define MAX_N 8

int permutation[MAX_N];

void print(int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", permutation[i]);
    printf("\n");
}

int check(int p, int n)
{
    for (int i = 0; i < p; ++i)
    {
        if (permutation[i] == permutation[p])
            return 0;
        /* code here */
        if (i - p == permutation[i] - permutation[p]) //мб все в abs
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
    int n;
    //scanf("%d", &n);
    n = 8;
    gen(0, n);
    return 0;
}