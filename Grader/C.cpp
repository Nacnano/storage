#include<bits/stdc++.h>
using namespace std;

//map<int,bool> used; 
//long long arr[10000];
//bool done=0;
//
//void solve(long long x,long long mi,int lv)
//{
//	if(done) return;
//	
//	if(x==0)
//	{
//		for(int i=lv-1;i>=1;i++)
//		{
//			printf("%d ",arr[i]);
//		}
//		return;
//	}
//	
//	printf("mi %lld\n",mi);
//		if(x>mi/2 && mi%2==0)
//		{
//			used[mi/2]=1;
//			arr[lv]=mi/2;
//			solve(x-mi/2,mi/2,lv+1);
//			arr[lv]='/0';
//			used[mi/2]=0;
//		}
//		if(x>mi/3 && mi%3==0)
//		{
//			used[mi/3]=1;
//			arr[lv]=mi/3;
//			solve(x-mi/3,mi/3,lv+1);
//			arr[lv]='/0';
//			used[mi/3]=0;
//		}
//		if(mi>x)
//		{
//			solve(x,mi/2,lv);
//			solve(x,mi/3,lv);
//		}
//}
long long n;
vector<long long> ans;
//void solve(long long now,long long mi,long long div)
//{
//		while(now>=1 && mi>1)
//		{
//	//	printf("MI %lld %lld %lld\n",now,mi,div);
//			if(mi>now)
//			{
//				mi/=div;
//				continue;
//			}
//			
//			else if(now>=mi)
//			{
//				now-=mi;
//				n=now;
//				ans.push_back(mi);
//				mi/=div;
//				
//			}
//		}
//		return;
//}

int main(){
	
	long long cnt6=1,cnt3=1,cnt2=1;
	while(cnt6<=1e9)
	{
		cnt6*=6;
	}
//	while(cnt3<=1e9)
//	{
//		cnt3*=3;
//	}
//	while(cnt2<=1e9)
//	{
//		cnt2*=2;
//	}
	
//	printf("%lld\n",cnt6);
	
	int q;
	scanf("%d",&q);
	
	long long tmp=cnt6;
	while(q--)
	{
		cnt6=tmp;
		scanf("%lld",&n);
	//	solve(n,cnt,1);
	
	//	solve(n,cnt6,6);
	
		stack<long long>  stk;
		while(n>=1)
		{
			int mul=n/cnt6;
			n%=cnt6;
			if(mul!=0)
			{
				if(mul==5)
				{
					stk.push(cnt6*3);
					stk.push(cnt6*2);
				}
				else if(mul==4)
				{
					stk.push(cnt6*3);
					stk.push(cnt6);
				}
				else if(mul==3)
				{
					stk.push(cnt6*3);
				}
				else if(mul==2)
				{
					stk.push(cnt6*2);
				}
				else if(mul==1)
				{
					stk.push(cnt6);
				}
			}
			
			cnt6/=6;
		}
		
		printf("%d ",stk.size());
		while(!stk.empty())
		{
			printf("%d ",stk.top());
			stk.pop();
		}
		printf("\n");
//		printf("%d ",ans.size()+n);
//		if(n==1) printf("1 ");
//		sort(ans.begin(),ans.end());
//		for(auto it:ans) printf("%lld ",it);
//		printf("\n");
//		ans.clear();
	}
	
	
}
