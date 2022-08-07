
//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
int n, m;
int graph[1001][1001];
int visited[1001][1001][2];  //visited[x][y][0] -> x,y 노드에 벽을 부시지 않고 도착했을 때의 최단거리, visited[x][y][1] -> x,y 노드에 벽을 부시고 도착했을 때의 최단거리
int dx[] = { -1,1,0,0};
int dy[] = { 0,0,-1,1};
queue<tuple<int,int,int>>q;
int bfs() {
    // 큐가 빌 때까지 반복
    q.push({0,0,0});
    visited[0][0][0]=1;
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int z = get<2>(q.front());
        q.pop();
        //목적지에 도착하면 리턴
        if(x == n-1 && y == m-1)return visited[x][y][z];
        //현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            //공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
            //벽인 경우
            if (graph[nx][ny] == 1) {
                if(z==0){
                    visited[nx][ny][1] = visited[x][y][z] + 1;
                    q.push({ nx,ny ,1});
                }
            }
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            else if (graph[nx][ny] == 0&&visited[nx][ny][z]==0) {
                visited[nx][ny][z] = visited[x][y][z] + 1;
                q.push({ nx,ny,z });
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int k=0;k<m;k++){
            graph[i][k]=str[k] -'0';
        }
    }
    cout << bfs()<<endl;
    
}
