#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool visited[1001];
int graph[101][101];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int n,m;
int bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({ x,y });
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
            if (graph[nx][ny] == 0) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
    //가장 오른쪽 아래까지의 최단 거리 반환
    return graph[n - 1][m - 1];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    char a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cin >> a;
            graph[i][k] = a - '0';
        }
    }
    cout << bfs(0, 0) << endl;
}