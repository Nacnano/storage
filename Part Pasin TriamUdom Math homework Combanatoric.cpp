#include<bits/stdc++.h>
using namespace std;

int n, op=0,ans=0;
bool used[20];
int arr[20];

void solve(int lv)
{
	if(lv==n+1)
	{
		op++;
		int val=0;
		for(int i=1;i<=n;i++)
		{
			val*=10;
			val+=arr[i];
		}
		
		if(op%2) val*=-1;
		printf("%d\n",val);
		ans+=val;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(used[i]==0)
		{
			arr[lv]=i;
			used[i]=1;
			solve(lv+1);
			used[i]=0;
		}
	}	
}

int main(){
	scanf("%d",&n);
	solve(1);
	printf("ANS : %d",ans);
}
