#include<bits/stdc++.h>
using namespace std;

vector<int> pos;
vector<int> neg;
bool prime[1000010];
bool kprime[1000010];
vector<int> vp;
vector<int> vpu;
long long sum[1000010];

int main(){
	
	for(int i=2;i<=500000;i++)
	{
		if(prime[i]==0)
		{
			vp.push_back(i);
			for(int j=2;i*j<=1000000;j++) prime[i*j]=1;
		}
	}
	
	int z,k,n;
	scanf("%d%d%d",&z,&k,&n);

	for(auto pr:vp) if(k%pr==0) vpu.push_back(pr);
	for(auto pr:vpu)
		for(int i=1;i*pr<=k;i++) kprime[i*pr]=1;
	
	int cnt=0;
	for(int i=1;i<=k;i++) if(kprime[i]==0) neg.push_back(i);
	sort(neg.begin(),neg.end());
	
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		pos.push_back(x);
	}
	
	for(int i=0;i<n-1;i++)
	{
		int l=pos[i];
		int r=pos[i+1];
		int minus=((r-l)/k)*neg.size();
		int itl=lower_bound(neg.begin(),neg.end(),l%k)-neg.begin();
		int itr=upper_bound(neg.begin(),neg.end(),r%k)-neg.begin();
		minus+=itl+itr;
		sum[i]=r-l+1-2*minus;
	}
	
	long long ans=0;
	long long now=0;
	for(int i=0;i<n-1;i++)
	{
		now+=sum[i];
		if(now<0) now=0;
		ans=max(ans,now);
	}
	for(int i=0;i<n-1;i++)
	{
		now+=sum[i];
		if(now>0) now=0;
		ans=max(ans,-now);
	}
	
	printf("%lld",ans);
}
