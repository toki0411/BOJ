//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int> v;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int N;
bool visited[26][26];
int graph[26][26];
int bfs(int x, int y){
    
    int cnt =1;
    visited[x][y]=true;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue; //범위를 넘어가면 무시
            if(graph[nx][ny]==0)continue;  //0이면 무시
            if(graph[nx][ny]==1&&!visited[nx][ny]){
                q.push({nx,ny}); visited[nx][ny]=true;
                cnt++;
            }
            
        }
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    char a;
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            cin >>a;
            graph[i][k]=a-'0';
        }
    }
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            if(graph[i][k]==1&&!visited[i][k]){
                int s =bfs(i,k);
                v.push_back(s);
            }}
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
}

