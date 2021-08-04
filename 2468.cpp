#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int graph[101][101];
bool visited[101][101];
vector<int> arr;
bool dfs(int x, int y,int c) {
	if (x <= -1 || y <= -1||x>=N||y>=N)return false;
	if (graph[x][y] > c &&!visited[x][y]) {   
		visited[x][y]=true;
		dfs(x - 1, y,c);  //��
		dfs(x, y - 1,c);  //��
		dfs(x + 1, y,c);  //��
		dfs(x, y + 1,c);  //��
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {  //�׷��� �Է�
		for (int k = 0; k < N; k++) {
			cin >> graph[i][k];
		}
	}
	for (int q = 0; q <= 100; q++) { //���� �� (�̶�, �� ���� �ʴ� ���� �������� �ִٰ� �����Ƿ�(���� ���̴� 1���� ����) ��� 0���� �����Ѵ�)
		int result = 0;
		for (int i = 0; i < N; i++) {
			for (int k = 0; k < N; k++) {
				if (dfs(i, k, q))result++;
			}
		}
		arr.push_back(result);
		for (int i = 0; i < N; i++) {  //visited �ʱ�ȭ
			for (int k = 0; k < N; k++) {
				visited[i][k] = false;
			}
		}
	}
	sort(arr.begin(), arr.end());
	int len = arr.size()-1;
	cout << arr[len];
}