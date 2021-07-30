#include <iostream>
#include <vector>
#include<cstring>
#include <algorithm>
using namespace std;
int arr[1001];
bool visited[1001];
int n;
bool dfs(int x) {
	if (!visited[x]) {
		// ���� ��带 �湮 ó��
		visited[x] = true;

		// ���� ���� ����� �ٸ� ��带 ��������� �湮
		int y = arr[x];
		if (!visited[y]) {
			dfs(y);
		}
		
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	int a;
	cin >> T;
	while (T--) {
		int count = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a;
			arr[i] = a;
		}
		for (int i = 1; i <= n; i++) {
			if (dfs(i) || arr[i] == i)count++;
		}
		cout << count << endl;
		count = 0;
		int arr[1001] = { 0, };
		memset(visited, false, n + 1);
	}
}