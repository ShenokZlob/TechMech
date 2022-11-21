#define MAX_SIZE 100
typedef struct
{
    int heap_size;
    int val[MAX_SIZE];
} heap;

int get_min(heap *h)
{
    return /* code here */
}

void add_heap(heap *h, int x)
{
    int pos = ++h->heap_size;
    while (pos > 1 && x < h->val[pos >> 1])
    {
        h->val[pos] = h->val[pos >> 1];
        pos >>= 1;
    }
    h->val[pos] = x;
}

void extract_min(heap *h)
{
    int pos = 1;
    while (2 * pos < h->heap_size)
    {
        int idx_min = h->val[2 * pos] < h->val[2 * pos + 1]
                        ? 2 * pos
                        : 2 * pos + 1;
        if (h->val[h->val[h->heap_size]] <= h->val[idx_min])
            break;
        h->val[pos] = h->val[idx_min];
        pos = idx_min;
    }
    h->val[pos] = h->val[h->heap_size--];
}

//????
