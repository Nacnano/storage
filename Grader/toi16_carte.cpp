#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int r,k;
	scanf("%d%d",&r,&k);
	int ans=-1;
	while(r--)
	{
		int a[410],dp[410][410];
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		
		for(int i=0;i<=n;i++) for(int j=0;j<=n;j++) dp[i][j]=500;
		for(int i=1;i<=n;i++) dp[i][i]=1;
		for(int l=1;l<n;l++)
		{
			for(int i=1;i+l<=n;i++)
			{
				for(int j=i+1;j<=i+l;j++)
				{
					if(a[j-1]!=a[j]) dp[i][i+l]=min(dp[i][i+l],dp[i][j-1]+dp[j][i+l]);
					else if(a[j-1]==a[j])
					{
						int ret;
						for(ret=0;ret<=k && a[j-ret]==a[j+1];ret++)
						
						if(ret==k) dp[i][i+l]=min(dp[i][i+l],dp[i][j-1]+dp[j][i+l]);
						else dp[i][i+l]=min(dp[i][i+l],dp[i][j-1]+dp[j][i+l]-1);
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d ",dp[i][j]);
			}
			printf("\n");
		}

		ans=max(ans,dp[1][n]);
		printf("dp %d\n",dp[1][n]);
	}
	printf("%d",ans);
}
