#include <stdio.h>

int main()
{
    char a_char = 0;
    unsigned char a_char_u = 0;

    char *s = "Hello,""world";
    
    short a_short = 0;
    unsigned short a_short_u = 0;
    
    unsigned int a_int_u = 0;
    int a_int = 0;

    unsigned long a_long_u = 0;
    long a_long = 0;

    char bell = '\x7';

    printf("%c\n", bell);
    printf("%s\n", s);
    
    printf("unsigned char is between: %u and %uc\n", a_char_u, a_char_u - 1);
    printf("char is between: %u and %uc\n", a_char_u, a_char_u - 1);
    printf("unsigned int is between: %ud and %ud\n", a_int_u, a_int_u - 1);
    printf("int is between: %d and %d\n", a_int, a_int - 1);
    printf("unsigned long is between: %lu and %lu\n", a_long_u, a_long_u - 1);
    printf("long is between: %ld and %ld\n", a_long, (long)((unsigned long)~0>>1));
}
