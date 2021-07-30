#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[51][51];
int N, M;
bool dfs(int x, int y) {  //dfs ���� ����Լ� ��� 
	if (x <= -1 || y <= -1 || x >= M || y >=N) { return false; }  //0,0���� �����ϱ⶧���� 0���� ������ return false
	if (graph[x][y] == 1) {    
		graph[x][y] = 0;		
		dfs(x - 1, y);  //�� 
		dfs(x, y - 1);  //��
		dfs(x + 1, y);  //��
		dfs(x, y + 1);  //��
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, K;
	int result = 0;
	int a, b;
	cin >> T ;
	for (int l = 0; l < T; l++) {
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			cin >> a >> b;
			graph[a][b] = 1;
		}
		
		for (int i = 0; i < M; i++) {
			for (int k = 0; k < N; k++)
				if (dfs(i, k)) {
					result++;
				}
		}
		cout << result<<endl;
		result = 0;
		int graph[51][51] = { 0, } ;
		
	}
}