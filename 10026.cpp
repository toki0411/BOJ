#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
using namespace std;
int n;
bool visited[101][101];
int dy[] = { -1,1,0,0 }; //상 하 좌 우
int dx[] = { 0,0,-1,1 };
int graph[101][101];
int graph_p[101][101];
void dfs(int x, int y, int s) { //정상인
	graph[x][y] = 0;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (graph[nx][ny] == s && !visited[nx][ny]) { //번지수 1이고, 방문안했으면
				visited[nx][ny] = true;
				dfs(nx, ny, s);
			}
		}

	}
}
void dfs_p(int x, int y, int s) { //적록색약 
	graph_p[x][y] = 0;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (graph_p[nx][ny] == s && !visited[nx][ny]) { //번지수 1이고, 방문안했으면
				visited[nx][ny] = true;
				dfs_p(nx, ny, s);
			}
		}

	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char a;
	cin >> n;
	int norm = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cin >> a;
			if (a == 'R') { graph[i][k] = 1; graph_p[i][k] = 1;
			}
			else if (a == 'G') { graph[i][k] = 2; graph_p[i][k] = 1; }
			else { graph[i][k] = 3; graph_p[i][k] = 3;
			}
			
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			int s = graph[i][k];
			if (!visited[i][k]) {
				dfs(i, k, s);
				if (visited[i][k])norm++;
			}
		}
	}for(int i=0;i<n;i++)
		fill_n(visited[i], n, false);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			int s = graph_p[i][k];
			if (!visited[i][k]) {
				dfs_p(i, k, s);
				if (visited[i][k]) {  result++; }
			}
		}
	}
	cout << norm << ' '<< result;
}