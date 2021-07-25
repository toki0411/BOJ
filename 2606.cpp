#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[1001];
vector<int> graph[1001];
int count;

int dfs(int x) {
	// ���� ��带 �湮 ó��
	visited[x] = true;
	
	// ���� ���� ����� �ٸ� ��带 ��������� �湮
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