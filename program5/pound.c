//����һ����һ�������ĺ���
#include <stdio.h>
void pound(int n);      //ASCII����ԭ������
int main()
{
    int times=5;
    char ch='!';        //ASCII����33
    float f=6.0;

    pound(times);       //int���͵Ĳ���
    pound(ch);          //��pound((int)ch);��ͬ
    pound(f);           //��pound((int)f);��ͬ

    return 0;
}
void pound(int n)       //ASCI�����ͷ
{                       //�����ú�������һ��int���͵Ĳ���
    while (n-->0)
    {
        printf("#");
    }
    printf("\n");
}