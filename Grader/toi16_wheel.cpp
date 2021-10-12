#include<bits/stdc++.h>
using namespace std;

bool hsh[15][105];
vector<int> v[15];
string s[15];
int len[15];	
int n,t;

int main(){
	scanf("%d%d",&n,&t);

	for(int i=1;i<=n;i++)
	{
		cin >> s[i];
		len[i]=s[i].length();
		for(int j=0;j<len[i];j++)
		{
			if(s[i][j]-'0'==t)
			{
				v[i].push_back(j);
				hsh[i][j]=1;
			}
		}	
	}
	
	bool check=1;
	int val;
	int mul=0;
	while(check)
	{
		for(auto it:v[1])
		{
			val=len[1]*mul+it;
			
			if(val==0) continue;
			for(int i=2;i<=n;i++)
			{
				if(hsh[i][val%len[i]]==0) break;
				
				else if(i==n)
				{
					check=0;
					break;
				}
			}
			
			if(!check) break;
		}
		mul++;
	}
	printf("%d",val);
}
