#include <stdio.h>

#define ASCII_fst 33
#define ASCII_end 127

int main(void)
{
    int num, multiplier = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    if (num >= ASCII_fst && num < ASCII_end)
    {
        printf("%d represents the character '%c'\n", num, num);

        while (multiplier <= 100)
        {
            printf("%c * %d = %c\n", num, multiplier, num * multiplier);
            
            multiplier++;

            if (num * multiplier > ASCII_end)
            {
                break;
            }
        }
        
    }
    else if((num >=0 && num < 33) || num == ASCII_end)
    {
        printf("\a%d was not printable in ASCII.\n", num);
    }
    else
    {
        printf("\a%d was not found in ASCII.\n", num);
    }

    printf ("\ndone!\n");

    return 0;
}