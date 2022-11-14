#include <iostream>

// что-то про неявное приобразование типов
double t();
double a = 1.0;
int main()
{
    int j;
    for (j = 1; j < 4; j++)
    if ((int) ++a % 2)
        std::cout << a;
    else
        std::cout << t();
    return 0;
}

double t()
{
    double i;
    a = a + 1;
    i = a;
    return i;
}

//357