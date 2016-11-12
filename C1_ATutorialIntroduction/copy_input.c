#include <stdio.h>

int main()
{
    int c;
    
    while( (c = getchar()) != EOF) {
        putchar(c);
        //printf("\n");
    }
    
    putchar(0);
    putchar(1);
    int d;
    if ((d = 1))
        printf("d=1");
    
    putchar(EOF);
}
