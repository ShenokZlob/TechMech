#include <iostream>

struct inter
{
    int size;
    int arr[];

    inter(int n)
    {
         size = n;
         arr[size]{};
    }

    void set(int l, int r, int v);

    void get_sum(int l, int r);

    void add(int l, int r, int v);
};



int main()
{
    inter A(15);

    return 0;
}