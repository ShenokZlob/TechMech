#include <stdio.h>

//?????
// Смущают варианты ответов
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1][3];
    a[1][0] = a[1][1] = a[1][2] = 1;
    for (int i = 2; i <= n; ++i)
    {
        /* code here */
        a[i][0] = a[i - 1][1] + a[i - 1][2];
        a[i][1] = a[i - 1][0] + a[i - 1][2];
        a[i][2] = a[i - 1][0] + a[i - 1][1];

    }
    printf("%d\n", a[n][0] + a[n][1] + a[n][2]);
    return 0;
}

