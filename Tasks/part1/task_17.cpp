#include <iostream>

int main()
{
    const int n = 10;
    int x[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int t;
    for (int i = 1; i <= n; i++)
    {
        t = x[n - i - 1];
        x[n - i + 1] = x[i];
        x[i] = t;
    }
    for (int i = 0; i < n; ++i)
        std::cout << x[i] << ' ';
    
    return 0;
}

//Код содержит ошибку