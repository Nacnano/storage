#include<bits/stdc++.h>
using namespace std;

double a[300005];

int main(){

    double n;
    scanf("%lf",&n);
    double sum=0;
    for(int i=0;i<(int)n;i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }

    double mean=sum/n;
    double stddev=0;
    for(int i=0;i<n;i++)
    {
        stddev+=(a[i]-mean)*(a[i]-mean);
    }

    stddev/=n;
    printf("%lf %lf",mean,sqrt(stddev));
}
