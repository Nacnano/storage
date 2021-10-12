#include<bits/stdc++.h>
using namespace std;

int x[100010],y[100010],h[100010],v[100010];
map<pair<int,int>, pair<int,int> > mm;
map<pair<int,int>,bool> vis; 
priority_queue<pair<pair<int,int>, pair<int,int> > > pq;

int di[5][3]={{0,1},{0,-1},{1,0},{-1,0}};

int main(){
	
	int n,t,f,s,q;
	scanf("%d%d",&n,&t);
	scanf("%d%d%d",&f,&s,&q);
	
	for(int i=1;i<=n;i++)
	{
		int x,y,h,v;
		scanf("%d%d%d%d",&x ,&y ,&h ,&v );
		mm[{x,y}]={h,v};
		if(v==1)
		{
			pq.push({ {0,h}  , {x,y} });
		}
	}
	
	while(!pq.empty())
	{
		int x=pq.top().second.first;
		int y=pq.top().second.second;
		int t=pq.top().first.first;
		int h=pq.top().first.second;
		
		for(int i=0;i<n;i++)
		{
			
		}
		
	}
	
}
