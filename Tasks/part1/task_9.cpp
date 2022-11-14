#include <iostream>
// что-то с глобальными переменнами
// У глобальных переменных иницализация по умолчанию 
// У int i = 0

int i;

int main()
{
    if (int i = 20)
        i = 15;
    std::cout << i;
    return 0;
}


//0