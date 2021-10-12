#include<bits/stdc++.h>
using namespace std;

int a[100010];
int qsl[100010],qsr[100010];
int dpl[100010],dpr[100010];

int main(){
	
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		qsl[i]=qsl[i-1]+a[i];
	}
	for(int i=n;i>=1;i--) qsr[i]=qsr[i+1]+a[i];
	
	int st=0,ed=1e9;
	while(st<=ed)
	{
		int md=(st+ed)/2;
		
		bool chk=0;
		int pos1=INT_MAX,pos2=INT_MIN;
		for(int i=1;i<=n;i++)
		{
			dpl[i]=0;
			dpr[i]=0;
			if(a[i]>md)
			{
				pos1=min(pos1,i);
				pos2=max(pos2,i);
			}
		}
		if(pos1!=INT_MAX && pos2!=INT_MIN && pos2-pos1>m-1)
		{
			st=md+1;
			continue;
		}
		
		dpl[n]=1;
		for(int i=n;i>=1;i--)
		{
			for(int j=i-1;j>=i-m+1;j--)
			{
		
				dpl[j]=dpl[j+1];
				if(qsr[j]-qsr[i]>md)
				{
					dpl[j-1]++;
					i=j;
					break;
				}
				if(j==i-m+1)
				{
					dpl[j]++;
					i=j;
					break;
				}
			}
		}
		
		dpr[1]=1;
		for(int i=1;i<=n;i++)
		{	
			for(int j=i+1;j<=i+m-1;j++)
			{	
				dpr[j]=dpr[j-1];
				if(qsl[j]-qsl[i]>md)
				{
					dpr[j]++;
					i=j;
					break;
				}
				if(j==i+m-1)
				{
					dpr[j]++;
					i=j;
					break;
				}
			}
		}

		for(int i=0;i+m<=n+1;i++)
		{
			if(dpr[i]+dpl[i+m]<=k-1)
			{
				chk=1;
				break;
			}
		}
		
		if(!chk)st=md+1;
		else ed=md-1;
	}
	
	printf("%d",st);
}
