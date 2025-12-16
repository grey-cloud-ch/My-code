#include<bits/stdc++.h>
using namespace std;
int *myfunc(int *p,int n)
{
    int t=0;
    int *re = (int *)calloc(n,sizeof(int));
    if (re == NULL) {
        printf("内存分配失败");
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]!=0) re[t++]=p[i];
    }
    for(int i=t;i<n;i++) re[i]=0;
    return re;
}
int main()
{
    int *p,n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int *re = myfunc(a,n);
    for(int i=0;i<n;i++) printf("%d ",re[i]);
    free(re);
    re=NULL;
    return 0;
}