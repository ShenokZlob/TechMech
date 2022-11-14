#include <iostream>

int main()
{
    int x = 20;
    int *f = &x;
    float y = 21.0;
    float *g = &y;
    *f == *g ? *f = 1 : *f = 0;
    std::cout << x;
}

//0