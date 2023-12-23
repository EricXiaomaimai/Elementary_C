#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    long fileSize = 0;

    // ��Դ�ļ�
    sourceFile = fopen("example.txt", "r");
    if (sourceFile == NULL) {
        printf("�޷���Դ�ļ�.\n");
        return 1;
    }

    // �򿪻򴴽�Ŀ���ļ�
    destinationFile = fopen("information.txt", "a+");
    if (destinationFile == NULL) {
        printf("�޷��򿪻򴴽�Ŀ���ļ�.\n");
        fclose(sourceFile);
        return 1;
    }

    // �����ַ��������ļ���С
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
        fileSize++;
    }

    // ����
    fputc('\n', destinationFile);

    // ��ӡ�ļ���С
    fprintf(destinationFile, "�ļ���С: %ld �ֽ�\n", fileSize);

    // �ر��ļ�
    fclose(sourceFile);
    fclose(destinationFile);

    printf("�������.\n");

    return 0;
}