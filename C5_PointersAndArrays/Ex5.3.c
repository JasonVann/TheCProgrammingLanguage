#include <stdio.h>

int strcat2(char *s, char *t)
{
    // append t to end of s
    while(*s)
        s++;
    while(*t){
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';
    return 0;
}

int main()
{
    /*
    // bus error
    char *s = "hello ";
    char *t = "world";
    strcat2(s, t);
    */

    char s[] = {'h', 'e', 'l', 'l', 'o', ' ', '\0'};
    char t[] = {'w', 'o', 'r', 'l', 'd', '\0'};

    strcat2(s, t);
    
    printf("s = %s\n", s);
}
