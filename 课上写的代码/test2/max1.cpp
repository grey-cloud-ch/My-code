#include<stdio.h>
using namespace std;
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
int main()
{
    int n,s=0,a[114514];
    printf("请输入一个整数：");
    scanf("%d",&n);
    while(n!=0)
    {
        a[s]=n%10;
        n/=10;
        s++;
    }
    printf("逆序输出为：");
    for(int i=0;i<s;i++) printf("%d",a[i]);
    bs(a,s);
    printf("\n最小数为：");
    for(int i=0;i<s;i++) 
    {
        if(a[i]==0) continue;
        printf("%d",a[i]);
    }
    printf("\n最大数为：");
    for(int i=s-1;i>=0;i--) printf("%d",a[i]);
    return 0;
}