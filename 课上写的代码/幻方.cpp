#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,l;
    cin>>n;
    int s[n+1][n+1]{};
    h=(n+1)/2;
    l=1;
    s[l][h]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(l==1 && h==n) l++;
        else if (s[l-1][h+1]) l++;
        else if (l==1) l=n,h++;
        else if (h==n) l--,h=1;
        else l--,h++;
        s[l][h]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}