#include <stdio.h>


int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 3};
    for (int i = 0; i < sizeof(a) / sizeof(*a); ++i)
    {
        int p = a[i], sum = 0;
        for (int i = 0; i < sizeof(a) / sizeof(*a); ++i)
            if (a[i] > p)
                sum += a[i];
        printf("%d ", sum);
    }
   return 0; 
}

// Ответ:
//17 15 9 5 0 9 