#include <iostream>

int main()
{
    int x = 1, y = 2, z = 3, res = 0;
    res = x+++--y+--z;
    std::cout << x;
    std::cout << y;
    std::cout << z;
    std::cout << res;
    return 0;
}

//2124