#include<bits/stdc++.h>
using namespace std;

long long arr[100010];
long long qs[100010];
vector<long long> v;

int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
	sort(arr,arr+n);
	
	qs[n-1]=arr[n-1];
	v.push_back(qs[n-1]);
	long long col=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		col+=arr[i];
		qs[i]=qs[i+1]+col;
		v.push_back(qs[i]);
	}
	
	int q;
	scanf("%d",&q);
	while(q--)
	{
		long long x;
		scanf("%lld",&x);
		if(x>v[n-1])
		{
			printf("-1\n");
			continue;
		}
		
		int pos=lower_bound(v.begin(),v.end(),x)-v.begin();
		printf("%d\n",pos+1);
	}

}
