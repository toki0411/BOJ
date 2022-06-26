//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int graph[251][251];
int dx[] = {1,0,-1,0,1,-1,-1,1};
int dy[] = {0,1,0,-1,1,-1,1,-1};
int M, N;
bool visited[251][251];
void bfs(int x, int y){
    visited[x][y]=true;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= M || ny < 0 || ny >= N)continue; //범위를 넘어가면 무시
            if(graph[nx][ny]==0)continue;  //0이면 무시
            if(graph[nx][ny]==1&&!visited[nx][ny]){
                q.push({nx,ny});
                visited[nx][ny]=true;
            }
        }
    }
    return ;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> M>>N;
    for(int i=0;i<M;i++){
        for(int k=0;k<N;k++){
            cin >>graph[i][k];
        }
    }
    int cnt = 0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(!visited[i][j]&&graph[i][j]==1){
                bfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt;
    
}

