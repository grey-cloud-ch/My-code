#include<stdio.h>
using namespace std;
int main()
{
    int n,a1,t=1;
    scanf("%d",&n);
    a1=n*n-(n-1);
    printf("%d^3=",n);
    for(int i=a1;i<(n+1)*(n+1)-n;i=i+2)
    {
        printf("%d",i);
        if(t<n) printf("+");
        t++;
    }
    return 0;
}