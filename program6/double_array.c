/*��дһ�ͳ���,������������8��Ԫ�ص�double��������,ʹ��ѭ����ʾ�û�Ϊ��
һ����������8��ֵ���ڶ�������Ԫ�ص�ֵ����Ϊ��һ�������ӦԪ�ص��ۼ�֮�͡�
����,�ڶ�������ĵ�4��Ԫ�ص�ֵ�ǵ�һ������ǰ4��Ԫ��֮��,�ڶ�������ĵ�5
��Ԫ�ص�ֵ�ǵ�һ������ǰ5��Ԫ��֮��(��Ƕ��ѭ���������,�������õڶ�����
��ĵ�5��Ԫ���ǵڶ�������ĵ�4��Ԫ�����һ������ĵ�5��Ԫ��֮��,ֻ��һ��
ѭ�������������,����Ҫʹ��Ƕ��ѭ��)�����,ʹ��ѭ����ʾ�������������,��
һ��������ʾ��һ��,�ڶ���������ʾ�ڵ�һ���������һ��,����ÿ��Ԫ�ض����
һ�������Ԫ�����Ӧ��*/
#include <stdio.h>
#define size 8
int main()
{
    double element1[size], element2[size], sum = 0;
    int i;

    printf("enter the eight elements:");
    for (i = 0; i < size; i++)
    {
        scanf("%lf", &element1[i]);
        sum += element1[i];
        element2[i] = sum;
    }

    // ��һ��
    for (i = 0; i < size; i++)
    {
        printf("%.2lf ", element1[i]);
    }
    printf("\n");

    // �ڶ���
    for (i = 0; i < size; i++)
    {
        printf("%.2lf ", element2[i]);
    }

    return 0;
}