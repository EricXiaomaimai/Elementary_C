#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("请输入两个整数：");
    scanf("%d%d", &num1, &num2);

    // 计算第一个数的因数数量并打印
    printf("%d的因数数量为：", num1);
    int count1 = 0;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            count1++;
        }
    }
    printf("%d\n", count1);

    // 打印第一个数的所有因数
    printf("%d的因数为：", num1);
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // 计算第二个数的因数数量并打印
    printf("%d的因数数量为：", num2);
    int count2 = 0;
    for (int i = 1; i <= num2; i++) {
        if (num2 % i== 0) {
            count2++;
        }
    }
    printf("%d\n", count2);

    // 打印第二个数的所有因数
    printf("%d的因数为：", num2);
    for (int i = 1; i <= num2; i++) {
        if (num2 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}