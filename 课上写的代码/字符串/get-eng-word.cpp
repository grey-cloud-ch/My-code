#include<bits/stdc++.h>
using namespace std;
char sen[1000],out[1000];
void get_sen(){
    fgets(sen,1000,stdin);
    int len = strlen(sen);
    if (len > 0 && sen[len - 1] == '\n') {
        sen[len - 1] = '\0';
    }
}
void get_words(){
     int t=0;
    for(int i=0;i<strlen(sen);i++)
    {
        if((sen[i]>='A' && sen[i]<='Z') || (sen[i]>='a' && sen[i]<='z') || sen[i]==' ')
        {
            out[t]=sen[i];
            t++;
        }
    }
}
int main()
{
    get_sen();
    get_words();
    for(int i=0;i<strlen(out);i++)
    {
        if(out[i]==' ')
        {
            printf("\n");
            continue;
        }
        printf("%c",out[i]);
    }
    return 0;
}