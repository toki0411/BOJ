#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int R, C;
bool visited[251][251];
char graph[251][251];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int o, v;
queue<pair<int, int>>q;
void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x, y });
	int wolf = 0;
	int sheep = 0;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		if (graph[x][y] == 'o')sheep++;
		else if (graph[x][y] == 'v')wolf++;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
				if (!visited[nx][ny] && graph[nx][ny] != '#') {
					visited[nx][ny] = true;
					q.push({ nx, ny });
				}
			}
		}

	}
	if (sheep > wolf) { o += sheep; }
	else v += wolf;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int k = 0; k < C; k++) {
			cin >> graph[i][k];
		}
	}
	for (int i = 0; i < R; i++) {
		for (int k = 0; k < C; k++) {
			if (graph[i][k] != '#' && !visited[i][k])
				bfs(i, k);
		}
	}
	cout << o << ' ' << v;
}