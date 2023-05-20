#include <stdio.h>

void up(int);
void bye(void);

int main(void)
{
    int num;

    printf("Please enter a number:");
    scanf("%d", &num);

    up(num);
    bye();

    return 0;

}

void up(int n)
{
    int frequency;
    frequency = 1;

    while (frequency<=100)
    {
        printf("%d+%d=%d", n, frequency, n + frequency);
        putchar('/');
        printf("\n");

        frequency = frequency + 1;
    }
    
}

void bye(void)
{
    printf("Bye");
}