#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define inf 9999999
#define N 205
using namespace std;

int map[N][N];
int n,m,s,e;

void Flord()
{
    int i,j,k;
    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(map[i][k]!=inf && map[k][j]!=inf && map[i][j]>map[i][k]+map[k][j])
                    map[i][j]=map[i][k]+map[k][j];//演算法實現的關鍵所在
    if(map[s][e]!=inf)
        printf("%d\n",map[s][e]);
    else
        printf("-1\n");
}
int main()
{
    int i,j;
    int x,y,z;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                map[i][j]=inf;
            }
            map[i][i]=0;
        }
        for(i=0; i<m; i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            if(map[x][y]>z)
                map[x][y]=map[y][x]=z;
        }
        scanf("%d %d",&s,&e);
        Flord();
    }
    return 0;
}
