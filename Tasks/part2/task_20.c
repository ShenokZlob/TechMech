#include <stdio.h>
#include <stdlib.h>


// Закольцованный массив для буферизации ввода-вывода


struct buffer
{
    int begin, end, size;
    char *buf;
};

typedef struct buffer buffer;

buffer* create_buffer(int size)
{
    buffer *b = calloc(1, sizeof(*b));
    b->begin = b->end = 0;
    b->size = size;
    b->buf = calloc(size, sizeof(b->buf[0]));
    return b;
}

int write_buffer(buffer *b, void *data, int size)
{
    char *d = (char *) data;
    int i;
    for (i = 0; i < size && b->begin != (b->end + 1) % b->size; ++i)
    {
        b->buf[b->end] = d[i];
        b->end = (b->end + 1) % b->size;
    }
    return i;
}

int read_buffer(buffer *b, void *data, int size)
{
    char *d = (char *) data;
    int i;
    for (i = 0; i < size && b->begin != b->end; ++i)
    {
        d[i] = b->buf[b->begin];
        b->begin = (b->begin + 1) % b->size;
    }
    return i;
}

int main(void)
{
    buffer* b = create_buffer(10);

    //for (int i = 0; i < b->size; ++i) printf("%d ", b->buf[i]);
    //printf("\n");

    for (char i = 0; i <= 15; ++i)
        write_buffer(b, &i, sizeof(i));


    //for (int i = 0; i < b->size; ++i) printf("%d ", b->buf[i]);
    //printf("\n");


    short p;
    while (read_buffer(b, &p, sizeof(p)) == sizeof(p))
    {
        printf("%d ", (char)p);
    }

    return 0;    
}

//0 2 4 6 