#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int graph[1001][1001];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int n, m;
int ans;
queue<pair<int, int>>q;
void bfs() {
    // 큐가 빌 때까지 반복
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        //현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            //미로 찾기 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
            //벽인 경우 무시
            if (graph[nx][ny] == -1) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 0) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> graph[i][k];
			if (graph[i][k] == 1)
				q.push({i, k});
		}
	}
    bfs();
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if(graph[i][k]==0)
            {
                cout << -1;
                exit(0);
            }
            if (ans < graph[i][k])ans = graph[i][k];
        }
    }
    cout << ans-1;
}