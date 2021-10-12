#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int sum=101*101;
	for(int i=1;i<=48;i++)
	{
		sum-=i*i;
		if(sum<0) sum*=-1;
	}
	printf("%d",sum);
	
	return 0;
}
