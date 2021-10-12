#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, ans=0;;
	scanf("%d",&n);
	for(int a=1;a<=n-2;a++)
		for(int b=1,c=n-2;a+b<=n-1 && c>0;b++)
		{
			c=n-a-b;
			ans+=a*b*c;
		}
	printf("%lld",ans);
}
