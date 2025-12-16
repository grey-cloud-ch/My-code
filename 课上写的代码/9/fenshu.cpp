#include<bits/stdc++.h>
using namespace std;
#define N 5
int like[N][N];
int bu[N] = {0};  
int assign[N];            
int sc = 0;
void ans() {
    printf("%d:\n", ++sc);
    for (int i = 0; i < N; i++) {
        printf("%c %d\n", 'A' + i, assign[i]);
    }
    printf("\n");
}
void dfs(int student) {
    if (student == N) {
        ans();
        return;
    }
    for (int book = 0; book < N; book++) {
        if (!bu[book] && like[student][book] == 1) {
            bu[book] = 1;
            assign[student] = book;
            dfs(student + 1);
            bu[book] = 0;
        }
    }
}

int main() {
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++) scanf("%d",&like[i][j]);
    }
    dfs(0);
    printf("%d", sc);
    return 0;
}
/*0 0 1 1 0
1 1 0 0 1
0 1 1 0 1
0 0 0 1 0
0 1 0 0 1*/