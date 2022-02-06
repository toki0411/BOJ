//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int N, M;
int graph[8][8];
int graph2[8][8];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M)continue;
            if(graph2[nx][ny]==1)continue;
            if(graph2[nx][ny]==0){
                graph2[nx][ny]=2;
                q.push({nx,ny});
            }
        }
    }
    return ;
    
}

int zerocheck(){
    int cnt = 0;
    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            if(graph2[i][k]==0)cnt++;
        }
    }
    return cnt;
}
vector<pair<int, int>>v;
vector<pair<int,int>> g;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N>>M;
    int zero;
    int max = -1;
    for(int i=0;i<N;i++){  //입력받기
        for(int k =0;k<M;k++){
            cin >> graph[i][k];
            graph2[i][k]=graph[i][k];
            if(graph[i][k]==2){
                v.push_back({i,k});
            }
            else if(graph[i][k]==0){
                g.push_back({i,k});
                
            }
        }
    }
    for(int l=0;l<g.size();l++){
        int b1=g[l].first;
        int b2=g[l].second;
        for(int s=0;s<g.size();s++){
            int b3=g[s].first;
            int b4=g[s].second;
            for(int r=0;r<g.size();r++){
                int b5=g[r].first;
                int b6=g[r].second;
                if((b1!=b3||b2!=b4)&&(b3!=b5||b4!=b6)&&(b1!=b5||b2!=b6)){
                    graph2[b1][b2]=1;
                    graph2[b3][b4]=1;
                    graph2[b5][b6]=1;
                    for(int i=0;i<v.size();i++){  //바이러스 퍼뜨리기
                        int a = v[i].first;
                        int b = v[i].second;
                        bfs(a,b);
                    }
                    
                    zero = zerocheck();
                    if(zero>max){
                        max =zero;
                        
                        }
                    
                    for(int kk=0;kk<8;kk++){
                        for(int ti=0;ti<8;ti++){
                            graph2[kk][ti]=0;
                        }
                    }
                    for(int bb=0;bb<N;bb++){
                        for(int nn=0;nn<M;nn++){
                            graph2[bb][nn]=graph[bb][nn];
                        }
                    }
                }  //if
            }
        }
        
    }
    cout<<max;
}
