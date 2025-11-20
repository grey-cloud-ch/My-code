#include<stdio.h>
using namespace std;
int main()
{
    char a,a1,a2;
    scanf("%c",&a);
    if(a=='z')
    {
        a1='a';
    } else {
        a1=a+1;
    }
    if(a=='a')
    {
        a2='z';
    } else {
        a2=a-1;
    }
    printf("%c,%c",a1,a2);
    return 0;
}