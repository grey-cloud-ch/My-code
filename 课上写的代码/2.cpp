#include<stdio.h>
using namespace std;
int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=9;k++)
            {
                if(i*i*i+j*j*j+k*k*k==100*i+10*j+k)
                {
                    int a=100*i+10*j+k;
                    if(a==0) continue;
                    printf("%d ",a);
                }
            }
        }
    }
    return 0;
}