#include <stdio.h>

// "%ld" - long type
// long long - 64 бита
// разница между х32 и х64?
struct A
{
    int a;
    long long b;
};

int main(void)
{
    printf("%ld\n", sizeof(struct A));
    return 0;
}

//16