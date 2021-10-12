#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main(){
	double val=0;
	for(int i=45;i<=133;i+=2) 
	val += 1/(sin(i*pi/180)*sin((i+1)*pi/180));
	printf("%lf",asin(1/val)*180/pi);
}
