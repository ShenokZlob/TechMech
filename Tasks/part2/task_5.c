#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 2; i < 10; ++i)
    {
        printf("%d ", a);
        /* code here */
        a = a + 3 * i * i - 3 * i + 1;
    }

    return 0;
}

/*
a = a + 3 * i * i;
a = a + 3 * i * i - 3 * i + 1; ++++++++ 
a = a + 3 * i * i + 3 * i + 1;
a = a + i * i;
a = a + i * i - i + 1;
a = a + i * i + i - 1;
*/
