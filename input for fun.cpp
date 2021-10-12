#include<bits/stdc++.h>
using namespace std;

set<int> ss;


int main(){

    while(1)
    {
        int x;
        scanf("%d",&x);
        ss.insert(x);

        for(auto it=ss.begin();it!=ss.end();it++) printf("%d ",*it);
        printf("\n");
    }
}
