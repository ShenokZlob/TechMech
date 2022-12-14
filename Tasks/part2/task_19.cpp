#include <stdio.h>

struct pool_t
{
    int *data;
    int size;
    int tail;
};

void push(pool_t &pool, int value)
{
    pool.tail = (pool.tail + 1) % pool.size;
    pool.data[pool.tail] = value;
}

int main()
{
    pool_t pool = {new int[5], 5, 2};
    for (int i = 0; i < 10; ++i)
        push(pool, i);
    for (int i = 0; i < pool.size; ++i)
        printf("%d ", pool.data[i]);
    return 0;
}

//7 8 9 5 6 