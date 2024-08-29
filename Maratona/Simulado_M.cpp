#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MAXN = 300+2;
const int INF = 1e9;
int n, m;
int desvio;
vector<vector<pair<int,int>>> graph(MAXN);
vector<int> dist(MAXN, INF);
vector<bool> vis(MAXN, false);


void dij(pair<int,int> s){
	for(int i = 0; i<=n; i++){
		dist[i] = INF; vis[i] = false;
	}
	priority_queue<pair<int,int>> pq;
	pq.push(s); //{-0,x}.
	dist[s.second] = 0;
	while(!pq.empty()){
		int a = pq.top().second; pq.pop();
		if(vis[a]) continue;
		vis[a] = true;
		for(auto u: graph[a]){
			if(u.first == desvio && a == s.second) continue;
			int b = u.first; int w = u.second;
			if(dist[b] > dist[a] + w){
				dist[b] = dist[a]+w;
				pq.push({-dist[b], b});
			}
		}
	}
}
signed main(){
	cin >> n;

