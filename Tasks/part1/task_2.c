#include <stdio.h>


char* func()
{
    static int cnt = 0;
    switch(++cnt)
    {
        case 0:
            return "first";
        case 1:
            return "second";
        case 2:
            return "third";
        default:
            return "over";
    }
}


int main(void)
{
    for (int i = 0; i < 4; ++i)
        printf("%s ", func());
    return 0;
}

//second third over over 