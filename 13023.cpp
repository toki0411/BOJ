#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[2001];
vector<int> graph[2001];
bool key; 
int cnt;
void dfs(int x,int cnt) {
	if (cnt == 4) {key = true; return;}
	// 현재 노드를 방문 처리
	visited[x] = true;

	// 현재 노드와 연결된 다른 노드를 재귀적으로 방문
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) {
			dfs(y,cnt+1);
			visited[y] = false;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	int a, b;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			visited[j] = false;
		dfs(i,0);
		if (key)break;
	}
	if (key) cout << 1;
	else cout << 0;
}

//https://imnotabear.tistory.com/86