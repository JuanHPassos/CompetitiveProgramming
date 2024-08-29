#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h, ans=0;
	cin >> n >> h;
	for(int i=0; i<n; i++){
		int hi;
		cin >> hi;
		if(hi <= h) ans++;
	}
	cout << ans;
}
