#include <string.h>

void merge(int *a, int n, int m, int *buff)
{
    int i = 0;
    int j = 0;
    for ( ; i < n && j < m; )
    {
        /* code here */
        {
            buff[i + j] = a[i];
            ++i;
        }
        else
        {
            buff[i + j] = a[j + n];
            ++j;
        }
    }
    for ( ; i < n; ++i)
        buff[i + j] = a[i];
    for ( ; j < m; ++j)
        buff[i + j] = a[j + n];
    memcpy(a, buff, sizeof(int) * (n + m));
}

void sort (int *a, int size, int *buff)
{
    if (size < 2)
        return;
    sort(a, size / 2, buff);
    sort(&a[size / 2], size - size / 2, &buff[size / 2]);
    merge(a, size / 2, size - size / 2, buff);
}


/*
if (a[j + n] < a[i])
if (a[j + n] <= a[i])
if (a[j + n] > a[i])
if (a[j + n] >= a[i])
*/
// ???????????????