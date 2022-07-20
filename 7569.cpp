#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int graph[101][101][101];
int dz[]={0,0,0,0,-1,1};
int dx[] = { -1,1,0,0,0,0 };
int dy[] = { 0,0,-1,1,0,0 };
int n, m;
int h;
int ans;
queue<tuple<int,int,int>>q;
void bfs() {
    // 큐가 빌 때까지 반복
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int z = get<0>(q.front());
        int x = get<1>(q.front());
        int y = get<2>(q.front());
        q.pop();
        //현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 6; i++) {
            int nz = z + dz[i];
            int nx = x + dx[i];
            int ny = y + dy[i];
            //미로 찾기 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m||nz >=h||nz <0)continue;
            //벽인 경우 무시
            if (graph[nz][nx][ny] == -1) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nz][nx][ny] == 0) {
                graph[nz][nx][ny] = graph[z][x][y] + 1;
                q.push({ nz,nx,ny });
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> m >> n >> h;
    bool key = false;
    for(int l=0;l<h;l++){
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                cin >> graph[l][i][k];
                if (graph[l][i][k] == 1)
                    q.push({l, i, k});
                else if(graph[l][i][k]==0)
                    key = true;
            }
        }
    }
    if (!key) {cout<<0; exit(0);}
    bfs();
    for(int l=0;l<h;l++){
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                if(graph[l][i][k]==0)
                {
                    cout << -1;
                    exit(0);
                }
                if (ans < graph[l][i][k])
                    ans = graph[l][i][k];
            }
        }
    }
    cout << ans-1;
}
