#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, c, d, ans = 0;
	cin >> a >> c >> d;
	queue<int> cansa;
	queue<int> relaxa;
	for(int i =0; i<c; i++){
		int b;
		cin >> b;
		cansa.push(b);
	}
	for(int i =0; i<d; i++){
		int b;
		cin >> b;
		a = a+b;
		ans++;
	}
	while(!cansa.empty() && a >= cansa.front()){
			a = a-cansa.front(); cansa.pop(); ans++;
	}
	

	cout << ans;
}
