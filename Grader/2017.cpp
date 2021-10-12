#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > v;

double dis(int x1,int y1,int x2,int y2)
{
    return (double)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void close(int l,int r)
{

}

int main(){

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        v.push_back({a,b});
    }

    sort(v.begin(),v.end());

}
