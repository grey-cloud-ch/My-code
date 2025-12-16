#include<bits/stdc++.h>
using namespace std;
void fun(int x,int *p,int *n)
{
    int t=0;
    for(int i=1;i<=x;i++)
    {
        if((x%i==0)&&(i%2==0))
        {
            p[t]=i;
            t++;
        }
    }
    *n=t;
}
int main()
{
    int x,n,p[1000];
    scanf("%d",&x);
    fun(x,p,&n);
    printf("%d\n",n);
    for(int i=0;i<n;i++) printf("%d ",p[i]);
    return 0;
}