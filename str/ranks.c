#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int row, column, m = 0;

    printf("enter your char:");

    while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n'); // ���˵��հ��ַ�
    if (isalpha(ch))
    {
        printf("enter columns:");
        scanf("%d", &column);
        printf("enter rows:");
        scanf("%d", &row);

        char str[column + 1];  //+1Ϊ������'\0'�Ŀռ�

        for (int i = 0; i < column; i++)
        {
            str[i] = ch;
        }
        str[column] = '\0';

        while (m < row )
        {
            printf("%s\n", str);

            m++;
        }
        return 0;
    }
    else
    {
        printf("please enter a letter");

        exit(1);
    }
}