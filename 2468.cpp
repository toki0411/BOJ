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
		dfs(x - 1, y,c);  //좌
		dfs(x, y - 1,c);  //하
		dfs(x + 1, y,c);  //우
		dfs(x, y + 1,c);  //상
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {  //그래프 입력
		for (int k = 0; k < N; k++) {
			cin >> graph[i][k];
		}
	}
	for (int q = 0; q <= 100; q++) { //비의 양 (이때, 비에 젖지 않는 땅이 있을수도 있다고 했으므로(땅의 높이는 1부터 시작) 비는 0부터 시작한다)
		int result = 0;
		for (int i = 0; i < N; i++) {
			for (int k = 0; k < N; k++) {
				if (dfs(i, k, q))result++;
			}
		}
		arr.push_back(result);
		for (int i = 0; i < N; i++) {  //visited 초기화
			for (int k = 0; k < N; k++) {
				visited[i][k] = false;
			}
		}
	}
	sort(arr.begin(), arr.end());
	int len = arr.size()-1;
	cout << arr[len];
}