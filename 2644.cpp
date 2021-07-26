#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool visited[101];
int graph[101][101];
int n, ans;
int c, d;
void dfs(int x, int q, int num) {
    // ���� ��带 �湮 ó��
    visited[x] = true;
    if (x == q) {
        ans = num; 
        return;
    }
    else {
        // ���� ���� ����� �ٸ� ��带 ��������� �湮
        for (int i = 1; i <= n; i++) {
            if (graph[x][i] == 1 && !visited[i]) {
                dfs(i, q, num + 1);
                
            }
        }
  
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m;
    cin >> n >> c >> d >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    dfs(c, d, 0);
    if (ans == 0) { cout << -1; }
    else cout << ans;
}