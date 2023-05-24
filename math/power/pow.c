#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double base, exponent, num;

    printf("Please enter a base:");
    scanf("%lf", &base);
    printf("Please enter an exponent:");
    scanf("%lf", &exponent);

    if (base == 0 && exponent <= 0 || base < 0 && fmod(exponent, 1.0) != 0 )
    {
        printf("undefined!");

        exit(1);
    }
    else if (exponent < 0)
    {
        num = 1.0 / pow(base, -exponent);

        printf("%f ^ %f = %f", base, exponent, num);

        return 0;
    }
    else
    {
        num = pow(base, exponent);

        printf("%f ^ %f = %f", base, exponent, num);

        return 0;
    }
}