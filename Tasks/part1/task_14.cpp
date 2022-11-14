#include <iostream>

int main()
{
    const int n = 20;
    char mass[n] = "It works!";
    char str[n];
    char *x, *y;
    x = mass;
    while (*x && *x != ' ')
    {
        y = str;
        while (*x != ' ' && *x)
        {
            *y = *x;
            y++;
            x++;
        }
        *y ='\0';
        std::cout << str;
    }
    return 0;
}

//It