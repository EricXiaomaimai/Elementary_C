//  演示自定义库“cstmstr.h”中的函数
#include <stdio.h>
#include <string.h>
#include "cstmstr.h"

int main(void)
{
    color_print("hello", 255, 0, 0);
    char rtn_str[50];
    int res;
    printf("\nPlease enter a string: ");
    res = cat_str("world", 'a', rtn_str);
    if (res)
        printf("The cat str is: %s", rtn_str);
    else
        printf("wrong.");
    return 0;
}
void color_print(char* str, int r, int g, int b) 
{
    printf("\033[38;2;%d;%d;%dm%s\033[0m", r, g, b, str);
}

int cat_str(const char *src, char opt, char *rtn)
{
    char input[50];
    scanf("%s", input);
    switch(opt)
    {
        case 'a':
        case 'A':
            strcat(input, src);
            strcpy(rtn, input);
            break;
        case 'b':
        case 'B':
            strcpy(rtn, src);
            strcat(rtn, input);
            break;
        default:
            return 0;
    }
    return 1;
}