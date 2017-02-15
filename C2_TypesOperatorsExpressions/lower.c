#include <stdio.h>

int lower(int c)
{
    // convert c to lower cae;
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{
    printf("%c == %c\n", 'C', lower(140));
}
