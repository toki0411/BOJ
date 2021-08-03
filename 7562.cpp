#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include<queue>
using namespace std;
bool visited[301][301];
int count[301][301];
int dx[] = { -2,-1,1,2,-2,-1,1,2 };
int dy[] = { 1,2,2,1,-1,-2,-2,-1 };
int a, b;
int l;

int bfs(int x,int y) {
	queue<pair<int, int>>q;
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		// 큐에서 하나의 원소를 뽑아 출력
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		//현재 위치에서 8가지 방향으로의 위치 확인
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			//영역 안 일 경우
			if (nx < l && nx >= 0 && ny >= 0 && ny < l) {
				if (nx == a && ny == b)return ::count[x][y]+1;
				else if (!visited[nx][ny] ) {
					q.push({ nx, ny }); visited[nx][ny] = true;
					::count[nx][ny] += ::count[x][y]+1;
				}
			}
		}

	}
	return 0;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	int x, y;
	cin >> T;
	while (T--) {
		cin >> l;
		cin >> x >> y;
		cin >> a >> b;
		if (a == x && y == b) { cout << 0 << endl; continue; }
		cout<<bfs(x, y)<<endl;
		for (int i = 0; i <= l; i++) {
			for (int k = 0; k <= l; k++) {
				::count[i][k] = 0;
				visited[i][k] = false;
			}
		}
		
		
	}
}