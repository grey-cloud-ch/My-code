#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    int k=0,t=0;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]>='0'&&str1[i]<='9')
        {
            k=0;
            str2[t]=str1[i];
            t++;
        } else {
            if(k==0)
            {
                k=1;
                str2[t]='*';
                t++;
            }
        }
    }
    for(int i=0;i<=strlen(str2);i++)
    {
        printf("%c",str2[i]);
    }
    return 0;
}