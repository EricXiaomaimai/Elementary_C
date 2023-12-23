#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    long fileSize = 0;

    // 打开源文件
    sourceFile = fopen("example.txt", "r");
    if (sourceFile == NULL) {
        printf("无法打开源文件.\n");
        return 1;
    }

    // 打开或创建目标文件
    destinationFile = fopen("information.txt", "a+");
    if (destinationFile == NULL) {
        printf("无法打开或创建目标文件.\n");
        fclose(sourceFile);
        return 1;
    }

    // 复制字符并计算文件大小
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
        fileSize++;
    }

    // 换行
    fputc('\n', destinationFile);

    // 打印文件大小
    fprintf(destinationFile, "文件大小: %ld 字节\n", fileSize);

    // 关闭文件
    fclose(sourceFile);
    fclose(destinationFile);

    printf("复制完成.\n");

    return 0;
}