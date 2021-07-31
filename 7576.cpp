#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int graph[1001][1001];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int n, m;
int ans;
queue<pair<int, int>>q;
void bfs() {
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
            if (graph[nx][ny] == -1) continue;
            // �ش� ��带 ó�� �湮�ϴ� ��쿡�� �ִ� �Ÿ� ���
            if (graph[nx][ny] == 0) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> graph[i][k];
			if (graph[i][k] == 1)
				q.push({i, k});
		}
	}
    bfs();
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if(graph[i][k]==0)
            {
                cout << -1;
                exit(0);
            }
            if (ans < graph[i][k])ans = graph[i][k];
        }
    }
    cout << ans-1;
}