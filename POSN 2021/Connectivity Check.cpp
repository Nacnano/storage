#include<bits/stdc++.h>
using namespace std;

vector<int> g[100005];
bool vis[100005];

void dfs(int u)
{
    if(vis[u]) return;
    vis[u]=1;

    for(auto v:g[u])
    {
        dfs(v);

    }
}
int main(){

    int n,m;
    scanf("%d%d",&n,&m);

    while(m--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
