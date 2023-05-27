#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int lcm(int num1, int num2) {
    int gcd_val = gcd(num1, num2);
    return (num1 * num2) / gcd_val;
}

int main() {
    int num1, num2;
    
    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);
    printf("最小公倍数是：%d\n", lcm(num1, num2));
    
    return 0;
}