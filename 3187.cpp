#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int R, C;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
char graph[251][251];
bool visited[251][251];
queue<pair<int, int>>q;
int k, v;
void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	int wolf = 0;
	int sheep = 0;
	// ť�� �� ������ �ݺ�
	while (!q.empty()) {
		// ť���� �ϳ��� ���Ҹ� �̾� ���
		int x = q.front().first;
		int y = q.front().second;
		if (graph[x][y] == 'k') { sheep++; }
		else if (graph[x][y] == 'v') { wolf++; }
		q.pop();
		//���� ��ġ���� 4���� ���������� ��ġ Ȯ��
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			//���� �� �� ���
			if (nx < R && nx >= 0 && ny >= 0 && ny < C) {
				if (!visited[nx][ny] && graph[nx][ny] != '#') {
					q.push({ nx, ny }); visited[nx][ny] = true;
				}
			}
		}
		
	}
	if (sheep > wolf) { k += sheep; }
	else { v += wolf; }
	
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
			if (!visited[i][k] && graph[i][k] != '#') {
				bfs(i, k);
			}
		}
	}
	
	cout << k << ' ' << v;
}