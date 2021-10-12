#include<bits/stdc++.h>
using namespace std;

const int mx=100000;
vector<int> tree[mx+5];
int depth[mx+5];

void de(int u,int s)
{
    for(auto v:tree[u])
    {
        if(v!=s)
        {
            depth[v]=depth[u]+1;
            de(v,u);
        }
    }
}

void dfs(int u,int s)
{
  //  if(g[u].size()==1) dfs()
}


int main(){

    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    //Suppose that Node 1 is the root.
    depth[1]=1;
    de(1,-1);

    for(int i=1;i<=n;i++) printf("%d ",depth[i]);

}
