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
    // ť�� �� ������ �ݺ�
    while (!q.empty()) {
        // ť���� �ϳ��� ���Ҹ� �̾� ���
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        //���� ��ġ���� 4���� ���������� ��ġ Ȯ��
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            //�̷� ã�� ������ ��� ��� ����
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
            //���� ��� ����
            if (graph[nx][ny] == 0) continue;
            // �ش� ��带 ó�� �湮�ϴ� ��쿡�� �ִ� �Ÿ� ���
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
    //���� ������ �Ʒ������� �ִ� �Ÿ� ��ȯ
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