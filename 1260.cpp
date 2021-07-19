#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
bool visited[1001];
vector<int> graph[1001];

void dfs(int x) {
    // 현재 노드를 방문 처리
    visited[x] = true;
    cout << x << ' ';
    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y]) dfs(y);
    }
}
// BFS 함수 정의
void bfs(int start) {
    queue<int> q;
    q.push(start);
    // 현재 노드를 방문 처리
    visited[start] = true;
    // 큐가 빌 때까지 반복
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int x = q.front();
        q.pop();
        cout << x << ' ';
        
        // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for (int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];
            
            if (visited[y]==false) {
                q.push(y);
                visited[y] = true;
   
            }
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int a, b;
	int N, M, v;
 
	cin >> N >> M >> v;
    
	for (int i = 0; i < M; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
	}
    for(int k=1;k<=N;k++)
        sort(graph[k].begin(), graph[k].end());
    dfs(v);
    cout << endl;
    for (int i = 0; i <= N; i++) {
        visited[i] = false;
    }
    bfs(v);
}