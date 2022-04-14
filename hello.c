#include <stdio.h>
int main(void)
{
    int num1, num2, num3, result;
    printf("请输入第一条边长:");
    scanf("%d", &num1);
    printf("请输入第二条边长:");
    scanf("%d", &num2);
    printf("请输入第三条边长:");
    scanf("%d", &num3);
    result = judge(num1, num2, num3);
    if (result == 1)
    {
        if (num1*num1 + num2*num2 == num3*num3 | num2*num2 + num3*num3 == num1*num1 |num3*num3 + num1*num1 == num2*num2)
        {
            printf("这三个数可以构成直角三角形");
        }
        else
        {
            printf("这三个数能构成三角形，但不能构成直三角形");
        }
    }
    else
    {
        printf("这三个数不能构成三角形");
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
