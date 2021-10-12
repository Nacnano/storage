/*
Username: Nacnano
Date: 5/5/2021
Problem: 2030
Description: IDK Maybe... Implementation and Sliding Window

คิดไม่ออก ส่งเฉยๆ เผื่อถูกสัก test case
*/

#include<bits/stdc++.h>
using namespace std;

int a[1000010];
deque<int> mxpos,mnpos;

int main(){

    int n,p,q;
    scanf("%d%d%d",&n,&p,&q);

    for(int i=1;i<=n;i++) scanf("%d",&a[i]);

    long long ans=0;
    for(int i=1,j=1;i<=n;i++)
    {

        while(!mxpos.empty())
        {
            if(a[mxpos.front()]<=a[i]) mxpos.pop_front();
            else break;
        }
        mxpos.push_front(i);

        while(!mnpos.empty())
        {
            if(a[mnpos.front()]>=a[i]) mnpos.pop_front();
            else break;
        }
        mnpos.push_front(i);

        if(a[mxpos.back()]-a[mnpos.back()]<p || a[mxpos.back()]-a[mnpos.back()]>q) continue;

        int sum=0;
        while(!mxpos.empty() && !mnpos.empty())
        {
            if(j>i) break;
            j++;
            if(a[mxpos.back()]-a[mnpos.back()] >= p && a[mxpos.back()]-a[mnpos.back()] <=q)
            {
                while(!mxpos.empty())
                    if(mxpos.back()<j) mxpos.pop_back();
                    else break;
                while(!mnpos.empty())
                    if(mnpos.back()<j) mnpos.pop_back();
                    else break;
            }
            else break;
        }
        ans+=j;
    }
    printf("%d",ans);
}
