#include <stdio.h>
#include <stdlib.h>

void expand(char s1[], char s2[])
{
    char c;
    int i, j;
    i = j = 0;

    while ((c = s1[i++]) != '\0')
        if (s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while (c < s1[i])
                s2[j++] = c++;
        }
        else{
            printf("%d %c\n", s2[j], c);
            s2[j++] = c;
        }
    s2[j] = '\0';

    printf("s2 = %s\n", s2);
}

int main()
{
    char *s1 = "g-g\0";
    char *s2 = malloc(10 * sizeof('a'));

    expand(s1, s2);

    return 0;
}

    
