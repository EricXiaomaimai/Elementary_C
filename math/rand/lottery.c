#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char input;
    int random_num;
    srand(time(NULL));

    printf("Do you want to start the lottery? Press ENTER to start.\n");
    scanf("%c", &input);

    // 如果用户输入了回车键，开始抽奖
    if (input == '\n') {
        random_num = rand() % 100;

        if (random_num < 1) {
            printf("Congratulations! You won the first prize!\n");
        } else if (random_num < 3) {
            printf("Congratulations! You won the second prize!\n");
        } else if (random_num < 10) {
            printf("Congratulations! You won the third prize!\n");
        } else if (random_num < 20) {
            printf("Congratulations! You won the fourth prize!\n");
        } else {
            printf("Congratulations! You won the fifth prize!\n");
        }
    }

    return 0;
}