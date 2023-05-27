#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int main() {
    int num1, num2;

    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);
    printf("最大公约数是：%d\n", gcd(num1, num2));

    return 0;
}