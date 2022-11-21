#include <stdio.h>

#define MAX_AREA 8

int main()
{
    int x, y;
    int a[MAX_AREA + 2][MAX_AREA + 2];
    int sum = 0;
    for (int i = 0; i < MAX_AREA + 2; i++)
        for (int j = 0; j < MAX_AREA + 2; j++)
            a[i][j] = 0;
    scanf("%d %d", &x, &y);
    a[y][x] = 1;
    for (int i = y + 1; i <= MAX_AREA; i++)
        for (int j = 1; j <= MAX_AREA; j++)
            /* code here */
    for (int j = 1; j <= MAX_AREA; j++)
        sum += a[MAX_AREA][j];
    printf("%d", sum);
    return 0;
}

/*
a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
a[i - 1][j - 1] = a[i - 2][j - 2] + a[i - 2][j];
a[i][j] = a[i + 1][j + 1] + a[i + 1][j - 1];
a[i][j] = a[i][j - 1] + a[i - 1][j];
a[i - 1][j] = a[i][j - 2] + a[i][j + 1];
*/