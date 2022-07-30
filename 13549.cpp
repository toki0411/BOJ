#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include<queue>
using namespace std;
bool visited[100001];
int key=1000000000;
int a;
void bfs(int x) {
    queue<pair<int,int>>q;
    visited[x] = true;
    q.push({x,0});
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int nx = q.front().first;
        int time = q.front().second;
        q.pop();
        //현재 위치에서 위치 확인
        if (nx == a) {
            key = min(key, time);
        }
        if(nx*2<=100000 && nx*2>=0 &&!visited[nx*2]){q.push({2*nx,time});visited[2*nx] = true;}
        if(nx-1<=100000 && nx-1>=0 &&!visited[nx-1]){q.push({nx-1,time+1});visited[nx-1] = true;}
        if(nx+1<=100000 && nx+1>=0 &&!visited[nx+1]){q.push({nx+1,time+1});visited[nx+1] = true;}
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    cin >> a;
    if (a == N) { cout << 0; return 0; } //예외처리
    bfs(N);
    cout<<key ;
}
