// ʹ��Ƕ��if�����ʾһ������Լ��
#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned long num;  //�����Ե���
    unsigned long div;  //���ܵ�Լ��
    bool isPrime;       //�������

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                {
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                }
                else
                {
                    printf("%lu is divisible by %lu.\n", num, div);
                }
                isPrime = false;    //������������
            }
        }
        if (isPrime)
        {
            printf("%lu is prime.\n", num);
        }
        printf("Please enter an integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}