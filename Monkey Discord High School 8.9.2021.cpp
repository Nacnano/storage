#include<bits/stdc++.h>
using namespace std;

int main(){
	double n ,val1=0 ,val2=0;
	scanf("%lf",&n);
	double mul=n;
	for(int i=1;i<=n;i++,mul*=n)
	{
		val1+=mul;
		val2+=pow(i,n);
	}
	printf("\n%lf\n%lf\n%lf",val1,val2,val1/val2);
}
