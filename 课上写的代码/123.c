#include<stdio.h>

int main ()
{
    int n,a1,a2,a3;
    scanf("%d",&n);
    a1=n/100;
    if(a1>9||a1<1)
    {
        printf("输入数据不合法");
        return 0;
    }
    a2=n/10%10;
    a3=n%10;
    printf("%d%d%d",a1,a2,a3);
    return 0;
}
