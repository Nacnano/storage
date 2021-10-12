#include<bits/stdc++.h>
using namespace std;

double col[150];

double func(int x)
{
	if(x==1) return 11;
	if(x==101) return 1011;
	if(col[x]) return col[x];
	else return col[x]=(func(x-1)+func(x+1))/2;
}

int main(){
	
	double ans=0;
	for(int i=1;i<=111;i++)
	{
		printf("%lf\n",func(i));
		ans+=func(i);
	}
	printf("%lf",ans);
}
