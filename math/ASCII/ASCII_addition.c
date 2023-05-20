#include <stdio.h>

#define ASCII_A 65
#define ASCII_Z 90

int main(void)
{
    char c = 'A';

    while (c >= ASCII_A && c <= ASCII_Z)
    {
        printf("%c + 1=%c", c, c + 1);
        putchar('!');
        printf("\n");

        c++;
    }
    
    return 0;
}