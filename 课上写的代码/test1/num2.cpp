#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    int maxn=0,minn=200000;
    scanf("%d%d%d",&a,&b,&c);
    if(a>maxn) maxn=a;
    if(b>maxn) maxn=b;
    if(c>maxn) maxn=c;
    if(a<minn) minn=a;
    if(b<minn) minn=b;
    if(c<minn) minn=c;
    printf("%d,%d",maxn,minn);
    return 0;
}
    