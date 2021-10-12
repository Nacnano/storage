#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > g[50010];

int main(){
	
	int e,v;
	scanf("%d%d",&e,&v);
	
	int ans=0;
	for(int i=0;i<e;i++)
	{
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		g[u].push_back({v,w});
		g[v].push_back({u,w});
		ans+=w;
	}
	
	if(e==v) printf("%d",ans);
	else if(e+1==v) printf("%d",2*ans);
}
