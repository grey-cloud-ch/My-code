#include<stdio.h>
using namespace std;
int main()
{
    int a,h1,h2,d2,d1;
    scanf("%d",&a);
    h1=a/10000;
    if(h1>9||h1<=0)
    {
        printf("请输入5位整数");
    }
    d1=a%10;
    a=a/10;
    d2=a%10;
    a=a/100;
    h2=a%10;
    if(h1==d1&&h2==d2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}