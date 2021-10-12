#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int mx=0,aa,ab,ac,ad;
	for(int a=1;a<=2012;a++)
	{
		for(int b=1;a+b<=2013;b++)
		{
			for(int c=1;a+b+c<=2014;c++)
			{
				int d=2015-a-b-c;
				if(a*d+b*c+a*c>=mx)
				{
					mx=a*d+b*c+c*a;
					aa=a,ab=b,ac=c,ad=d;
				}
			}
			
		}
	}
	printf("%d\n%d %d %d %d",mx,aa,ab,ac,ad);
}
