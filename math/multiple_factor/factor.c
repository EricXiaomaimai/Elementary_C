#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("����������������");
    scanf("%d%d", &num1, &num2);

    // �����һ������������������ӡ
    printf("%d����������Ϊ��", num1);
    int count1 = 0;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            count1++;
        }
    }
    printf("%d\n", count1);

    // ��ӡ��һ��������������
    printf("%d������Ϊ��", num1);
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // ����ڶ�������������������ӡ
    printf("%d����������Ϊ��", num2);
    int count2 = 0;
    for (int i = 1; i <= num2; i++) {
        if (num2 % i== 0) {
            count2++;
        }
    }
    printf("%d\n", count2);

    // ��ӡ�ڶ���������������
    printf("%d������Ϊ��", num2);
    for (int i = 1; i <= num2; i++) {
        if (num2 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}