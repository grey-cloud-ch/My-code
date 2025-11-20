#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int n)
{
    bool flag = true;
    while(flag)
    {
        flag = false;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                flag = true;
                swap(a[i],a[i+1]);
            }
        }
    }
}
void ss(int a[],int n)
{
    for (int i = 1; i <n; i++) 
    {
    int ith = i;
    for (int j = i + 1; j <= n; j++) 
    {
      if (a[j] < a[ith]) {
        ith = j;
      }
    }
    swap(a[i], a[ith]);
  }
}
int ms(int a[],int b[],int c[],int na,int nb)
{
    int i=1,j=1,k=1;
    while (i < na && j < nb) {
        if (b[j] < a[i]) 
        {
            c[k] = b[j];
            j++;
        }   else 
        {
            c[k] = a[i];
            i++;
        }
        if(k==1)
        {
            k++;
            continue;
        }
        if(c[k]==c[k-1]) continue;
        k++;
    }
    for (; i < na; i++, k++) c[k] = a[i];
    for (; j < nb; j++, k++) c[k] = b[j];
    return k;
}
int main()
{
    int a[11],b[11],c[21];
    for(int i=1;i<=10;i++) scanf("%d",&a[i]);
    for(int i=1;i<=10;i++) scanf("%d",&b[i]);
    bs(a,11);
    printf("数组a：");
    for(int i=10;i>=1;i--) printf("%d ",a[i]);
    printf("\n");
    ss(b,11);
    printf("数组b：");
    for(int i=10;i>=1;i--) printf("%d ",b[i]);
    printf("\n");
    int k=ms(a,b,c,11,11);
    printf("合并之后的数组：");
    for(int i=k-1;i>=1;i--) printf("%d ",c[i]);
    printf("\n");
    return 0;
}
