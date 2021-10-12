#include<bits/stdc++.h>
using namespace std;

vector <int> a,b,uni,inter;
int main(){

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a.push_back(x);
    }

    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        b.push_back(x);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int itb=0,ita=0;
    while(ita <n && itb < m)
    {
        if(a[ita] == b[itb])
        {
            uni.push_back(a[ita]);;
            inter.push_back(a[ita]);
            ita++;
            itb++;
        }

        else if(a[ita] > b[itb])
        {
            inter.push_back(b[itb]);
            itb++;
        }
        else if(a[ita] < b[itb])
        {

            inter.push_back(a[ita]);
            ita++;
        }
    }

    while(ita <n)
    {
        inter.push_back(a[ita]);
        ita++;
    }

    while(itb < m)
    {
        inter.push_back(b[itb]);
        itb++;
    }


    for(auto x:uni) printf("%d ",x);
    printf("\n");
    for(auto x:inter) printf("%d ",x);
}
