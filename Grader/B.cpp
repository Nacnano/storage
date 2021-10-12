#include<bits/stdc++.h>
using namespace std;

vector<int> g[300010];
int p[300010];
int len[300010];

int _find(int x)
{
	if(p[x]==x) return x;
	else return p[x]=_find(p[x]);
}

void _union(int x,int y)
{
	int px=_find(x);
	int py=_find(y);
	
//	printf("H %d %d %d %d\n",x,px,y,py);
	if(px==x)
	{
		p[px]=py;
		len[py]++;
	}
	else if(py==y)
	{
		p[py]=px;
		len[px]++;
	}
//	else
//	{
//		p[px]=py;
//		len[py]+=len[px];
//	}
}

int main(){
	
	int n,m,q;
	scanf("%d%d%d",&n,&m,&q);
	
	for(int i=1;i<=n;i++) p[i]=i;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		_union(a,b);
	}
	
//	for(int i=1;i<=n;i++)
//	{
//		printf("%d\n",len[i]);
//	}
	
	while(q--)
	{
		int t;
		scanf("%d",&t);
		if(t==2)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			
			int pa=_find(a);
			int pb=_find(b);
			
		//	if(pa==pb) continue;
			
			p[pa]=pb;
			len[pb]=max(max(len[pa],len[pb]), min(len[pb]+(1+len[pa])/2, (1+len[pb])/2+len[pa])+1);
		}
		else if(t==1)
		{
			int x;
			scanf("%d",&x);
			int px=_find(x);
			printf("%d\n",len[px]);
		}
	}

}
