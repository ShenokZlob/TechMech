#include <stdio.h>

int main(void)
{
    int a [] = {2, 3, 4, 1, 3, 6, 4};
    int i = 0;
    for (int i = 0; i < sizeof(a) / sizeof(*a); ++i)
    {
        for (int i = 0; i < sizeof(a) / sizeof(*a) - 1; ++i )
            if (a[i] > a[i + 1])
            {
                int tmp = a[i]; // -
                a[i] = a[i + 1];
                a[i + 1] = a[i]; // -
            }

        
    }
    for (; i < sizeof(a) / sizeof(*a); ++i)
        printf("%d ", a[i]);
    return 0;
}

//1 1 1 1 3 4 4 