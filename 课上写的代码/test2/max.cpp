#include<stdio.h>
using namespace std;
void bs(int a[],int s);
int main()
{
    int n,a[4],s=0;
    printf("请输入一个四位整数：");
    scanf("%d",&n);
    for(int i=0;i<4;i++)
    {
        if(n==0)
        {
            printf("数据不合法");
            return 0;
        } 
        a[s]=n%10;
        n=n/10;
        s++;
    }
    if(n!=0) 
    {
        printf("数据不合法");
        return 0;
    }
    printf("逆序输出为：");
    for(int i=0;i<4;i++) printf("%d",a[i]);
    bs(a,4);
    printf("最小数为：");
    for(int i=0;i<4;i++) printf("%d",a[i]);
    printf("最大数为：");
    for(int i=3;i>=0;i--) printf("%d",a[i]);
    return 0;
}
void bs(int a[],int s)
{
    for(int i=1;i<=s;i++)
    {
        for(int t=0;t<s-1;t++)
        {
            int r;
            if(a[t]>a[t+1])
            {
                r=a[t];
                a[t]=a[t+1];
                a[t+1]=r;
            }
        }
    }    
}