#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int to_upper = 1;
    int c;

    /*
    if(argc != 2){
        printf("Error, type 1 for upper\n");
        return 0;
    }
    */
    
    //if (*argv[1] == '0')
    if (strcmp(argv[0], "lower"))
        to_upper = 0;
    
    while((c = getchar()) != EOF){
        if (to_upper)
            putchar(toupper(c));
        else
            putchar(tolower(c));
        
    }
}
