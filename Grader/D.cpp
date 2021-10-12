#include<bits/stdc++.h>
using namespace std;

//map<int,int> ver,hor;
//map<pair<int,int> ,int> rook;

int val[105][105];
int rook[105][105];

int main(){
	
	int n,k,p;
	scanf("%d%d%d",&n,&k,&p);
	
	if(n>100)
	{
		printf("0");
		return 0;
	}
	
	for(int i=1;i<=k;i++)
	{
		int x,y,c;
		scanf("%d%d%d",&y,&x,&c);
		rook[y][x]=c;
		for(int i=1;i<=n;i++) if(i!=x) val[y][i]^=c;
		for(int i=1;i<=n;i++) if(i!=y) val[i][x]^=c;
		
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=n;j++)
//			{
//				printf("%d ",val[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
	}
	
	
	
	while(p--)
	{
		int a,b,x,y;
		scanf("%d%d%d%d",&b,&a,&y,&x);
		int c=rook[b][a];
		rook[b][a]=0;
		rook[y][x]=c;
		for(int i=1;i<=n;i++) if(i!=a) val[b][i]^=c;
		for(int i=1;i<=n;i++) if(i!=b) val[i][a]^=c;
		for(int i=1;i<=n;i++) if(i!=y) val[i][x]^=c;
		for(int i=1;i<=n;i++) if(i!=x) val[y][i]^=c;

		
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
		//		printf("%d ",val[i][j]);
				if(val[i][j]>0) cnt++;
			}
		//	printf("\n");
		}
		printf("%d\n",cnt);
	}
}
