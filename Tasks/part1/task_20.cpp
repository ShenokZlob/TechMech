#include <iostream>
#include <vector>

void my_sort(auto &a, auto cmp, auto my_swap)
{
    for (int i = 0; i < a.size(); ++i)
    {
        auto min = std::begin(a) + i;
        for (auto j = std::begin(a) + i + 1; j != std::end(a); ++j)
        {
            if (cmp(*j, *min))
                min = j;
        }
        if (min != begin(a) + i)
            my_swap(*(std::begin(a) + i), *min);
    }
}

int main()
{
    std::vector<int> a;
    int n = 10;
    for (int i = 0; i < n; ++i)
        a.push_back(i);
    my_sort(a,
            [](auto a, auto b)
            {
                return a > b;
            },
            [](auto &a, auto &b)
            {
                a ^= b ^= a ^= b;}
            );
    for (int i = 0; i < n; ++i)
        std::cout << a[i] << ' ';
    return 0;
}

//error or обратная последовательность 

