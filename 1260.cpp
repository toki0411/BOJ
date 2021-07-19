#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
bool visited[1001];
vector<int> graph[1001];

void dfs(int x) {
    // ���� ��带 �湮 ó��
    visited[x] = true;
    cout << x << ' ';
    // ���� ���� ����� �ٸ� ��带 ��������� �湮
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y]) dfs(y);
    }
}
// BFS �Լ� ����
void bfs(int start) {
    queue<int> q;
    q.push(start);
    // ���� ��带 �湮 ó��
    visited[start] = true;
    // ť�� �� ������ �ݺ�
    while (!q.empty()) {
        // ť���� �ϳ��� ���Ҹ� �̾� ���
        int x = q.front();
        q.pop();
        cout << x << ' ';
        
        // �ش� ���ҿ� �����, ���� �湮���� ���� ���ҵ��� ť�� ����
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