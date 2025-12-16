#include<bits/stdc++.h>
using namespace std;
char *shift(char *pstr, int n, char mode)
{
    int len = strlen(pstr);
    if (len <= 1) return pstr;
    n = n % len;
    if (n == 0) return pstr; 
    char temp[21];
    if (mode == 'R') 
    {
        for (int i = 0; i < n; i++)
        {
            temp[i] = pstr[len - n + i];
        }
        for (int i = len - 1; i >= n; i--)
        {
            pstr[i] = pstr[i - n];
        }
        for (int i = 0; i < n; i++)
        {
            pstr[i] = temp[i];
        }
    }
    else if (mode == 'L')
    {
        for (int i = 0; i < n; i++)
        {
            temp[i] = pstr[i];
        }
        for (int i = 0; i < len - n; i++)
        {
            pstr[i] = pstr[i + n];
        }
        for (int i = 0; i < n; i++)
        {
            pstr[len - n + i] = temp[i];
        }
    }
    return pstr;
}
int main()
{
    char l[21];
    char *a;
    fgets(l, 21, stdin);
    int len = strlen(l);
    if (len > 0 && l[len-1] == '\n')
        l[len-1] = '\0';
    len = strlen(l);
    a = shift(l, 3, 'R');
    printf("%s\n", a);
    return 0;
}