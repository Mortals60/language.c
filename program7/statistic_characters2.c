/*编写一个程序读取输入,读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码每行打印8个"
字符-ASCII码"组合。建议:使用字符计数和求模运算符(%)在每8个循环周期时打印一个换行符。*/
#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        printf("%c-%d ", ch, ch);
        count++;

        if (count % 8 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}