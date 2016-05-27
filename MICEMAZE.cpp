#include <bits/stdc++.h>
using namespace std;
#define inf 1000000000
int N,T,E,M,u,v,t;
int main() {
	cin >> N; cin >> E;cin >> T;cin >> M;
	E--;
	vector<vector<pair<int,int>>> adjLst(N);
	for(int i=0;i<M;i++) {
		cin >> u >> v >> t;
		adjLst[--v].push_back(make_pair(--u,t));
	}
	vector<int> dist(N,inf);
	dist[E] = 0;
	priority_queue< pair<int,int>, vector<pair<int,int>> ,greater<pair<int,int>> > pq;
	pq.push(make_pair(0,E));
	while(!pq.empty()) {
		pair<int,int> fron = pq.top(); pq.pop();
		int d = fron.first; int u = fron.second;
		if(d > dist[u]) continue;
		for(int j=0;j<adjLst[u].size();j++) {
			pair<int,int> v = adjLst[u][j];
			if(dist[u] + v.second < dist[v.first]) {
				dist[v.first] = dist[u] + v.second;
				pq.push(pair<int,int>(dist[v.first],v.first));
			}
		}
	}
	int cnt=0;
	for(int i=0;i<N;i++) cnt += (dist[i]<=T)?1:0;
	cout << cnt << endl;
	return 0;
}
