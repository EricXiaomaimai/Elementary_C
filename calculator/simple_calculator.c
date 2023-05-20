#include <stdio.h>

void addition(double, double);
void subtraction(double, double);
void multiplication(double, double);
void division(double, double);

int main(void)
{
    double num1, num2;
    char op;

    printf("Please enter a number:");
    scanf("%lf", &num1);
    printf("Please enter an another number:");
    scanf("%lf", &num2);
    printf("Please enter an operator:");
    while ((op = getchar()) == ' ' || op == '\t' || op == '\n'); // 过滤掉空白字符

    if(op == '+')   // 计算加法
    {
        addition(num1, num2);
    }
    else if(op == '-')   // 计算减法
    {
        subtraction(num1, num2);
    }
    else if(op == '*')   //计算乘法
    {
        multiplication(num1, num2);
    }
    else if(op == '/')   //计算除法
    {
        division(num1, num2);
    }
    else
    {
        printf("invalid operator");
    }

    return 0;

}

void addition(double fst_num, double snd_num)
{
    printf("%.1f + %.1f = %.2f", fst_num, snd_num, fst_num + snd_num);
}

void subtraction(double fst_num, double snd_num)
{
    printf("%.1f - %.1f = %.2f", fst_num, snd_num, fst_num - snd_num);
}

void multiplication(double fst_num, double snd_num)
{
    printf("%.1f * %.1f = %.2f", fst_num, snd_num, fst_num * snd_num);
}

void division(double fst_num, double snd_num)
{
    printf("%.1f / %.1f = %.4f", fst_num, snd_num, fst_num / snd_num);
}