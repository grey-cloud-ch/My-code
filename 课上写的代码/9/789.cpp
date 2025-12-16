#include<bits/stdc++.h>
using namespace std;
int used[3]={{0}};
int num[3]={7,8,9};
int result[3];
void find(int k) {
    if (k == 3) {
        for (int i = 0; i < 3; i++) {
            printf("%d", result[i]);
        }
        printf(" ");
        return;
    }
    
    for (int i = 0; i < 3; i++) {
        if (used[i] == 0) { 
            result[k] = num[i]; 
            used[i] = 1; 
            find(k + 1); 
            used[i] = 0; 
        }
    }
}
int main()
{
    find(0);
    return 0;
}