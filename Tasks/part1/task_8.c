#include <stdio.h>


// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
// прочитать про порядок операций
int main()
{
    char *c[] = {"ZXC", "EFGH", "IJKL", "MNOP"};
    char **cp[] = {c, c + 3, c + 2, c + 1};
    char ***cpp = cp;

    //printf("%s", *c);

    printf("%s", **++cpp);
    printf("%s", *--*++cpp + 2);
    printf("%s", *cpp[-2] + 3);
    printf("%s", cpp[-1][-1] + 1);
    return 0;  
}

//MNOPGHJKL