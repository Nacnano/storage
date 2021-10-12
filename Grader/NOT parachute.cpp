#include <bits/stdc++.h>
using namespace std;
const long long md = 1e6 + 7;
long long dp1[3030], dp2[3030], fac[2020];
long long C[1010][1010];

int main(){
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	
	fac[0] = 1;
	for(int i = 1; i <= 2000; i++) fac[i] = (fac[i - 1] * (i * 1ll)) % md;
	for(int i = 1; i <= 1000; i++){
		C[i][0] = 1;
		C[i][i] = 1;
	}
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j < i; j++) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % md;
	}
	
	for(int i = 1; i <= N; i++) dp1[i] = C[N][i];	
	for(int i = 2; i <= M * 2; i += 2) dp2[i] = C[M][i / 2];

	long long ans = 0;
	for(int i = 1; i < K; i++){
		ans += (fac[i + ((K - i) / 2)] * ((dp1[i] * dp2[K - i]) % md)) % md;
		ans %= md;
	}
	ans += (fac[K] * dp1[K]) % md;
	ans %= md;
	
	if(!(K % 2)){
		ans += (fac[K / 2] * dp2[K]) % md;
		ans %= md;
	}
	
	printf("%lld", ans);
}
