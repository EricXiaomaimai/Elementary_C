#include <stdio.h>
#include <math.h>

int main(void)
{
    long num1, num2, num3, num4, num5;
    double root1, root2, root3, root4, root5;
    char numbers[80];

    printf("Please enter five numbers:");
    gets(numbers);
    sscanf(numbers, "%ld %ld %ld %ld %ld", &num1, &num2, &num3, &num4, &num5);
    
    root1 = sqrt(num1);
    root2 = sqrt(num2);
    root3 = sqrt(num3);
    root4 = sqrt(num4);
    root5 = sqrt(num5);

    printf("The square root of %ld is %.4f\n", num1, root1);
    printf("The square root of %ld is %.4f\n", num2, root2);
    printf("The square root of %ld is %.4f\n", num3, root3);
    printf("The square root of %ld is %.4f\n", num4, root4);
    printf("The square root of %ld is %.4f\n", num5, root5);

    return 0;
}