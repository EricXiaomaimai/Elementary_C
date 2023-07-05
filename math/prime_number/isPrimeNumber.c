#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int);
int main(void)
{
    int lower = 2;
    int upper = 1000;
    int m;
    int n = 0;
    bool isPrime;

    for (m = lower; m <= upper; m++)
    {
        isPrime = isPrimeNumber(m);

        if (isPrime)
        {
            printf("%d  ", m);

            n++;
        
            if (n % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}

bool isPrimeNumber(int number)
{
    int n;
    bool isPrime = true;

    for (n = 2; n < number; n++)
    {
        if (number % n == 0)
        {
            isPrime = false;

            break;
        }
        
    }

    return isPrime;
}