#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int now=0,ans=0;
    while(n--)
    {
        int x;
        cin >> x;
        now+=x;
        if(now<0) now=0;
        ans=max(ans,now);
    }
    printf("%d",now);
}
