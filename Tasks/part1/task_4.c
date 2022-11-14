#include <stdio.h>
#include <string.h>

// %s читает данные до space, tab, \n...
// %[a-zA-Z ] читай это
// %[^;] читай всё кроме этого
// "%n" - число прочитанных символов (целочисленное)
int main(void)
{
    char s[] = "I love coding, coding love me, we are glad together!";
    char *p = s;
    char name[100];
    int offset;
    printf("%d", offset);
    while (sscanf(p + offset, "%s%n", name, &offset) == 1)
    {
        if (offset % 2)
            printf("%s", name);
        p += offset;
    }
    return 0;
}

//???????????????? kavo