#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    int i,j,**p,**q;
    scanf("%d%d",&r,&c);
    p=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++)
        p[i]=(int *)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&p[i][j]);
    q = (int **)malloc(c * sizeof(int *));
    for(i = 0; i < c; i++)
        q[i] = (int *)malloc(r * sizeof(int));
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            q[j][i] = p[i][j];
        }
    }
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
     for (i = 0; i < r; i++) {
        free(p[i]);
    }
    free(p);
    for (i = 0; i < c; i++) {
        free(q[i]);
    }
    free(q);
    return 0;
}