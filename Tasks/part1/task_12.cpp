#include <iostream>

void fun(int &i)
{
    ++i;
}

class Number
{
public:
    void fun(int &i)
    {
        i = i + 12;
        std::cout << ++i;
    }
};

int main()
{
    int x = 12;
    Number two;
    two.fun(x);
    return 0;
}

//25