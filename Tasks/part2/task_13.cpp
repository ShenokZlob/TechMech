#include <algorithm> 
#include <iostream>

//quick sort
int partition(int *a, int size)
{
    int i = 1;
    for (int j = 1; j < size; ++j)
    {
        if (a[0] > a[j])
        {
            std::swap(a[j], a[i]);
            ++i;
        }
    }
    --i;
    std::swap(a[i], a[0]);
    return i;
}

void sort(int *a, int size)
{
    if (size < 2)
        return;


    std::swap(a[0], a[size - 1]);


    int k = partition(a, size);
    sort(a, k);
    sort(&a[k + 1], size - k - 1);
}

int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(a, 10);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << ' ';
    }
    
    return 0;
}


/*
swap(a[0], a[size/2]);
swap(a[0], a[size - 1]); +++ (мб)
swap(a[0], a[size/3]);
swap(a[0], a[rand() % size]);
*/