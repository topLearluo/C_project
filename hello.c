#include <stdio.h>
int main(void)
{
    int num1, num2, num3, result;
    printf("�������һ���߳�:");
    scanf("%d", &num1);
    printf("������ڶ����߳�:");
    scanf("%d", &num2);
    printf("������������߳�:");
    scanf("%d", &num3);
    result = judge(num1, num2, num3);
    if (result == 1)
    {
        if (num1*num1 + num2*num2 == num3*num3 | num2*num2 + num3*num3 == num1*num1 |num3*num3 + num1*num1 == num2*num2)
        {
            printf("�����������Թ���ֱ��������");
        }
        else
        {
            printf("���������ܹ��������Σ������ܹ���ֱ������");
        }
    }
    else
    {
        printf("�����������ܹ���������");
    }
    
}

int judge(int a, int b, int c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
