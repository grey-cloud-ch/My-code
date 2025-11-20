#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],s[100],o[100];
    fgets(str,100,stdin);
    fgets(s,100,stdin);
    int t=0;
    for(int i=0;i<strlen(str);i++)
    {
        int k=1;
        for(int j=0;j<strlen(s);j++)
        {
            if(str[i]==s[j]) k=0;
        }
        if(k==0) 
        {
            continue;
        } else {
            o[t]=str[i];
            t++;
        }
    }
    for(int i=0;i<strlen(o);i++)
    {
        printf("%c",o[i]);
    }
    return 0;
}