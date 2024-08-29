#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
	int N; cin >> N;
	int v[N+2];
	int sum[N+2];
	sum[0] = 0;
	for(int i = 1; i <= N; i++){
		cin >> v[i];
		sum[i] = sum[i-1]+v[i];
	}

	int par = 1;
	int impar = 0;

	int ans = 0;
	for(int i = 1; i <= N; i++){
		if(sum[i]%2 == 0){
			ans += impar;
			par++;
		}else{
			ans+= par;
			impar++;
		}
	}

	cout << ans;
	return 0;
}
