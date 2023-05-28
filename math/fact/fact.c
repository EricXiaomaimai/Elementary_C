# include <stdio.h>

long long fact(int);

int main(void)
{
    int n;
    long long f;

    printf("Enter a number:");
    scanf("%d", &n);

    f = fact(n);

    printf("%d! = %lld\n", n, f);

    return 0;
}

long long fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}