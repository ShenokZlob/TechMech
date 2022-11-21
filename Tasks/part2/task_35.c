#include <stdio.h>

int n = 10, m = 5;

int foo(int a[][], int i, int j)
{
    if (!(i < 0 || j < 0 || i >= n || j >= m))
    {
        if (i == 0 && j == 0) return a[i][j];

        int res = foo(a, i-2, j+1)+foo(a, i-2, j-1)+foo(a, i-1, j-2)+foo(a, i+1, j-2);
        // 
        return res;
    }
    else return 0;
}

int main()
{
    int a[n][m] = {0};
    /*for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            a[i][j] = 0;*/
    a[0][0] = 1;

    int result = foo(a, n, m);
    printf("%d", result);
    return 0;
}