#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[1001];
vector<int> graph[1001];
int count;

int dfs(int x) {
	// 현재 노드를 방문 처리
	visited[x] = true;
	
	// 현재 노드와 연결된 다른 노드를 재귀적으로 방문
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) {
			dfs(y); ::count++;
		}
	}
	return ::count;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int c;
	cin >> n >> c;
	int a, b;
	for (int i = 0; i < c; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	sort(graph->begin(), graph->end());
	cout<<dfs(1);
	
}